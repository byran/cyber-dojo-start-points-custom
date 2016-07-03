#ifndef TUBE_LINE_TYPES_HPP
#define TUBE_LINE_TYPES_HPP

#include <string>
#include <vector>

struct station_information_t
{
    std::string name;
};

using tube_stations_t = std::vector<station_information_t>;

struct tube_line_t
{
    std::string name;
    std::vector<int> stationIDs;
};

using tube_lines_t = std::vector<tube_line_t>;


#endif
