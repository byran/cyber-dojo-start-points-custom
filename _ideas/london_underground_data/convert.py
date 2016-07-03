import json
import os.path

with open('routes.json') as data_file:
    routes = json.load(data_file)

lines = []
stations = []

for route in routes:
    if route["modeName"] == "tube" and os.path.isfile(route["id"] + ".json"):
        line = {}
        line["name"] = route["id"]
        line["stations"] = []
        lines.append(line)
    elif route["modeName"] == "tube":
        print("ERROR: missing line file " + route["id"] + ".json")

def strip_station_name(name):
    while name.endswith(" "):
        name = name[:-1]

    if name.endswith(" Station"):
        name = name[:-8]

    if name.endswith("Underground"):
        name = name[:-11]

    if name.endswith(" "):
        name = name[:-1]

    return name

def station_index(name):
    if stations.count(name) == 0:
        stations.append(name)
    return stations.index(name)

def parse_line(line):
    with open(line["name"] + '.json') as data_file:
        stations = json.load(data_file)

    for station in stations:
        station_name = strip_station_name(station["commonName"])
        line["stations"].append(station_index(station_name))

for line in lines:
    parse_line(line)


print("extern const tube_stations_t stations = {")
for station in stations:
    print("\t{ \"" + station + "\" },")
print("};")

print()

print("extern const tube_lines_t lines = {")
for line in lines:
    print("\t{ \"" + line["name"] + "\", { ", end="")
    for id in line["stations"]:
        print(str(id) + ", ", end="")
    print("} },")
print("};")

tube_map = {}
tube_map["lines"] = lines
tube_map["stations"] = stations

print(json.dumps(tube_map, indent=2))