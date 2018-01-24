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
  Point::Point(Point const& P)
  {
    this->x=P.getX();
    this->y=P.getY();
    this->z=P.getZ();
  }
  Point::~Point(){}

  Point& Point::operator=(Point const& P)
  {
    if(this != &P)
    {
      this->x=P.getX();
      this->z=P.getZ();
      this->y=P.getY();
    }
    return *this;
  }

  void Point::printPoint(ostream &os) const
  {
    os<<"("<<this->x<<";"<<this->y<<";"<<this->z<<")";
  }

  double Point::getX() const {return this->x;}
  double Point::getY() const {return this->y;}
  double Point::getZ() const {return this->z;}

  bool Point::isIn(Cylindre C)
  {
     return (distance(this, C.getO())<= C.getR() && this->getZ()>=0 && this->getZ()<= C.getH());
  }
