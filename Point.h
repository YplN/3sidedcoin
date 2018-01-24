#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>

#include "Cylindre.h"

using namespace std;

class Point
{
  double x;
  double y;
  double z;

public:
  Point();
  Point(double x, double y, double z);
  ~Point();
  void printPoint(ostream &os) const;
  double getX();
  double getY();
  double getZ();
  bool isIn(Cylindre C);
};

#endif
