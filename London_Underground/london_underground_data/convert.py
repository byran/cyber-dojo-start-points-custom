import json
import os.path
from os import listdir
from os.path import isfile, join

def strip_station_name(name):
    name = name[:-20]
    return name

def station_id_exists(id):
    for station in stations:
        if(station["id"] == id):
            return True
    return False

def station_id_index(id):
    i = 0
    for station in stations:
        if(station["id"] == id):
            break
        i = i + 1
    return i

def json_output():
    tube_map = {"lines": lines} #, "stations": stations}
    print(json.dumps(tube_map, indent=2))

def cpp_output():
    print("#include \"tube_lines.hpp\"\n")
    print("std::vector<std::string> const stations = {");
    i = 0
    for station in stations:
        s = "{:<30}".format("\t\"" + station["name"] + "\",")
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

lineFiles = [f for f in listdir("lines_data/") if isfile(join("lines_data/", f))]

for file in lineFiles:
    with open("lines_data/" + file) as data_file:
        lineData = json.load(data_file)
        for station in lineData["stations"]:
            if(station["stopType"] == 	"NaptanMetroStation"):
                if(not station_id_exists(station["id"])):
                    stations.append({"id": station["id"], "name": strip_station_name(station["name"])})

        line_routes = []
        for route in lineData["orderedLineRoutes"]:
            route_stations = []
            for station_id in route["naptanIds"]:
                route_stations.append(station_id_index(station_id))
            line_routes.append({"route_name": route["name"], "route_stations": route_stations})
        lines.append({"name": lineData["lineName"], "routes": line_routes})

cpp_output()
