#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>

class Point;//Forward and uncomplete! declaration

#include "Cylindre.h"

class Point
{
  double x;
  double y;
  double z;

public:
  Point();
  Point(double x, double y, double z);
  Point(Point const& P);
  Point& operator=(Point const& P);
  ~Point();
  void printPoint(std::ostream &os) const;
  double getX() const;
  double getY() const;
  double getZ() const;
  bool isIn(Cylindre C);
};

#endif
