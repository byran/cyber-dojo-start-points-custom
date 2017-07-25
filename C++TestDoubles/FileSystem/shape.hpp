#ifndef SHAPE_INCLUDED
#define SHAPE_INCLUDED

#include <string>
#include <vector>

struct point
{
  int x;
  int y;
};

struct shape
{
  std::string name;
  std::vector<point> points;
};

#endif
