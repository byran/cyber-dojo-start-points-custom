import json
import os.path
from os import listdir
from os.path import isfile, join

def strip_station_name(name):
    if name.endswith("Underground Station"):
        name = name[:-20]
    if name.endswith("Underground Station "):
        name = name[:-21]
    return name

def station_name_exists(name):
    for station in stations:
        if(station == name):
            return True
    return False

def station_name_index(name):
    i = 0
    for station in stations:
        if(station == name):
            return i
        i = i + 1
    return -1

def json_output():
    tube_map = {"lines": lines, "stations": stations}
    print(json.dumps(tube_map, indent=2))

def cpp_output():
    print("#include \"tube_lines.hpp\"\n")
    print("std::vector<std::string> const stations = {");
    i = 0
    for station in stations:
        s = "{:<45}".format("\t\"" + station + "\",")
        print(s + " // " + str(i))#, end="")
        i = i + 1
    print("};\n")

    print("std::vector<line_t> const lines = {");
    for line in lines:
        print("\t{")
        print("\t\t\"" + line["name"] + "\",")
        print("\t\t{")
        for route in line["routes"]:
            print("\t\t\t{ ", end="")
            for station_id in route["route_stations"]:
                print(str(station_id) + ", ", end="")
            print("},")
        print("\t\t}")
        print("\t},")
    print("};")

stations = []
lines = []

currentStations = []

def load_current_stations(file):
    currentStations.clear()
    with open("lines_data/station-" + file) as data_file:
        stationData = json.load(data_file)
        for station in stationData:
            strippedName = strip_station_name(station["commonName"])
            currentStations.append({"id": station["naptanId"], "name": strippedName})
            if(not station_name_exists(strippedName)):
                stations.append(strippedName)

def station_name_from_id(id):
    for station in currentStations:
        if(station["id"] == id):
            return station["name"]
    return ""

lineFiles = [f for f in listdir("lines_data/") if isfile(join("lines_data/", f)) and not f.startswith("station")]

for file in lineFiles:
    with open("lines_data/" + file) as data_file:
        load_current_stations(file)
        lineData = json.load(data_file)

        line_routes = []
        for route in lineData["orderedLineRoutes"]:
            route_stations = []
            for station_id in route["naptanIds"]:
                name = station_name_from_id(station_id)
                route_stations.append(station_name_index(name))
            line_routes.append({"route_name": route["name"], "route_stations": route_stations})
        lines.append({"name": lineData["lineName"], "routes": line_routes})

cpp_output()
