#include "Point.h"
#include "Cylindre.h"

using namespace std;

  Point::Point() : x(0),y(0),z(0){}
  Point::Point(double x, double y, double z)
  {
    this->x=x;
    this->y=y;
    this->z=z;
  }
  Point::~Point(){}

  void Point::printPoint(ostream &os) const
  {
    os<<"("<<this->x<<";"<<this->y<<";"<<this->z<<")";
  }

  double Point::getX(){return this->x;}
  double Point::getY(){return this->y;}
  double Point::getZ(){return this->z;}

  bool Point::isIn(Cylindre C)
  {
     return (distance(this, C.getO())<= C.getR() && this->getZ()>=0 && this->getZ()<= C.getH());
  }
