#include "Cylindre.h"
#include "Point.h"

using namespace std;

  Cylindre::Cylindre() : r(0),h(0),O(){}
  Cylindre::Cylindre(double r, double h, Point P)
  {
    this->r = r;
    this->h = h;
    this->O = Point(P.getX(), P.getY(), P.getZ());
  }
  Cylindre::~Cylindre(){}

  double Cylindre::getR(){return this->r;}
  double Cylindre::getH(){return this->h;}
  Point Cylindre::getO(){return this->O;}

  void Cylindre::printCylindre(ostream &os) const
  {
    os<<"[O: "<<this->r<<" -- |: "<<this->h<<"] ";
    this->O.printPoint(os);
  }
