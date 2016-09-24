#ifndef TUBE_LINES_HPP
#define TUBE_LINES_HPP

#include <string>
#include <vector>

using route_t = std::vector<int>;

struct line_t
{
  std::string name;
  std::vector<route_t> routes;
};

extern std::vector<std::string> const stations;
extern std::vector<line_t> const lines;

#endif
