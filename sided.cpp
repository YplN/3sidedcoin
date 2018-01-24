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


double VolumeCalculation(Cylindre C, size_t n)
{
  double in = 0;
  double tot = 0;
  double x,y,z;

  int L = 5;
  int l = 5;
  int h = 5;

  Point P;

  for (size_t i = 0; i < n; i++) {
    x = l*(double) rand()/(double)RAND_MAX;
    y = L*(double) rand()/(double)RAND_MAX;
    z = h*(double) rand()/(double)RAND_MAX;

    P = Point(x,y,z);
    cout<<P<<endl;
    if(P.isIn(C))
      in++;

    tot++;
  }

  cout<<in<<"/"<<tot<<endl;
  return in;

}

int main()
{
Point P(3,2,1);
cout<<P<<endl;
Cylindre C(4.3, 2.2, P);
cout<<C<<endl;

cout<<VolumeCalculation(C,1000)<<endl;
return 0;
}
