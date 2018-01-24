#ifndef CYLINDRE_H
#define CYLINDRE_H

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

class Cylindre;//Forward and Uncomplete declaration

#include "Point.h"

class Cylindre
{
  double r;
  double h;
  Point *O;

  public:
  Cylindre();
  Cylindre(double r, double h, Point P);
  Cylindre(const Cylindre &c);
  ~Cylindre();

  double getR() const;
  double getH() const;
  Point* getO() const;

  void printCylindre(std::ostream &os) const;

};

#endif
