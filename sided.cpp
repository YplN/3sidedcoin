#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include "Point.h"
#include "Cylindre.h"

using namespace std;

double distance(Point A, Point B)
{
  return sqrt((A.getX() - B.getX())*(A.getX() - B.getX()) + (A.getY() - B.getY())*(A.getY() - B.getY()));
}

ostream& operator<<(ostream &os, Point const& P)
{
  P.printPoint(os);
  return os;
}

ostream& operator<<(ostream &os, Cylindre const& C)
{
  C.printCylindre(os);
  return os;
}

int main()
{
Point P(3,2,1);
cout<<P<<endl;
Cylindre C(4.3, 2.2, P);
cout<<C<<endl;
return 0;
}
