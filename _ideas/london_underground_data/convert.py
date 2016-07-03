import json
import os.path

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

def cpp_output():
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

def c_output():
    print("#define number_of_station_names " + str(len(stations)))
    print("extern const char *station_names[number_of_station_names];")
    print("#define number_of_tube_lines " + str(len(lines)))
    print("extern const struct tube_line_t tube_lines[number_of_tube_lines];")

    print()

    print("const char *station_names[number_of_station_names] = {")
    for station in stations:
        print("\t\"" + station + "\",")
    print("};")

    print()

    index = 0
    for line in lines:
        print("const int line_" + str(index) + "_stations[] = { ", end="")
        for id in line["stations"]:
            print(str(id) + ", ", end="")
        print("};")
        index += 1

    print()

    print("const struct tube_line_t tube_lines[number_of_tube_lines] = {")
    index = 0
    for line in lines:
        print("\t{ \"" + line["name"] + "\", line_" + str(index) + "_stations, " + str(len(line["stations"])) + " },")
        index += 1
    print("};")


def json_output():
    tube_map = {"lines": lines, "stations": stations}
    print(json.dumps(tube_map, indent=2))

# *** Load and parse ***

with open('routes.json') as data_file:
    routes = json.load(data_file)

lines = []
stations = []

for route in routes:
    if route["modeName"] == "tube" and os.path.isfile(route["id"] + ".json"):
        line = {"name": route["id"], "stations": []}
        lines.append(line)
    elif route["modeName"] == "tube":
        print("ERROR: missing line file " + route["id"] + ".json")

for line in lines:
    parse_line(line)

c_output()