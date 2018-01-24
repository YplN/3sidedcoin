#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

class Point
{
public:
  double x;
  double y;
  double z;

  Point() : x(0),y(0),z(0){}
  Point(double x, double y, double z)
  {
    this->x=x;
    this->y=y;
    this->z=z;
  }
  ~Point(){}

  void printPoint(ostream &os) const
  {
    os<<"("<<this->x<<";"<<this->y<<";"<<this->z<<")";
  }


  double getX(){return this->x;}
  double getY(){return this->y;}
  double getZ(){return this->z;}

  // bool isIn(Cylindre const C)
  // {
  //   return (distance(this, C.getO())<= C.getR() && this.getZ()>=0 && this.getZ()<= C.getH());
  // }
};

double distance(Point A, Point B)
{
  return sqrt((A.getX() - B.getX())*(A.getX() - B.getX()) + (A.getY() - B.getY())*(A.getY() - B.getY()));
}

class Cylindre
{
public:
  double r;
  double h;
  Point O;


  Cylindre() : r(0),h(0),O(){}
  Cylindre(double r, double h, Point P)
  {
    this->r = r;
    this->h = h;
    this->O= Point(P.getX(), P.getY(), P.getZ());
  }
  ~Cylindre(){}

  double getR(){return this->r;}
  double getH(){return this->h;}
  Point getO(){return this->O;}

  void printCylindre(ostream &os) const
  {
    os<<"[O: "<<this->r<<" -- |: "<<this->h<<"] ";
    this->O.printPoint(os);
  }

};

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
//P.printPoint();
Cylindre C(4.3, 2.2, P);
cout<<C<<endl;
//C.printCylindre();
return 0;
}
