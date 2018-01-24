#include "Cylindre.h"
#include "Point.h"

using namespace std;

Cylindre::Cylindre() : r(0),h(0),O(NULL){}
Cylindre::Cylindre(double r, double h, Point P)
{
  this->r = r;
  this->h = h;
  this->O = new Point(P.getX(), P.getY(), P.getZ());
}

Cylindre::Cylindre(const Cylindre &c){
  this->r=c.r;
  this->h=c.h;
  this->O=c.O==NULL?NULL:new Point(c.O->getX(),c.O->getY(),c.O->getZ());
}

Cylindre::~Cylindre(){
  if(this->O!=NULL)
    delete O;
}

double Cylindre::getR() const {return this->r;}
double Cylindre::getH() const {return this->h;}
Point* Cylindre::getO() const {return this->O;}

void Cylindre::printCylindre(ostream &os) const
{
  os<<"[O: "<<this->r<<" -- |: "<<this->h<<"] ";
  this->O->printPoint(os);
}
