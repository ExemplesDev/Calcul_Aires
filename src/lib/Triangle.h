#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygone.h"

class Triangle: public Polygone {
  public:
	

	Triangle (int a, int b) : Polygone (a,b) {}
    int aire () const;
 };
#endif

