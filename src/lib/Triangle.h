#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygone.h"

class Triangle: public Polygone {
  public:
	

    Triangle (int a, int b) : Polygone (a,b) {}
    virtual int aire () const;


 };

#endif

