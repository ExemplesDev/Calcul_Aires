#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygone.h"

class Rectangle: public Polygone {
  public:
	

    Rectangle (int a, int b) : Polygone (a,b) {}
    virtual int aire () const;

 };

#endif

