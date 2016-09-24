#ifndef TUBE_LINES_HPP
#define TUBE_LINES_HPP

#include <string>
#include <vector>
#include <map>

using route_t = std::vector<std::string>;

struct line_t
{
  std::string name;
  std::vector<route_t> routes;
};

extern std::map<std::string, std::string> const stations;
extern std::vector<line_t> const lines;

#endif