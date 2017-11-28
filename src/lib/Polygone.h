#ifndef POLYGONE_H
#define POLYGONE_H

#include <iostream>

class Polygone {
  protected:
    int largeur,hauteur;
  public:

    Polygone(int a,int b);

    int aire () const;
	int getLargeur () const;
	int getHauteur () const;
	void affiche() const;

};
#endif
