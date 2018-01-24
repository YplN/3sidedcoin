#ifndef CYLINDRE_H
#define CYLINDRE_H

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include "Point.h"

using namespace std;

class Cylindre
{
  double r;
  double h;
  Point O;

  public:
  Cylindre();
  Cylindre(double r, double h, Point P);
  ~Cylindre();

  double getR();
  double getH();
  Point getO();

  void printCylindre(ostream &os) const;

};

#endif
