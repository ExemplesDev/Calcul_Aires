#include "Triangle.h"


int Triangle::aire () const {
	int aire;

	// Calcul validé	
	aire = largeur * hauteur / 2;

	return aire; 
};

int Triangle::nouvelleFonction () const {

	int a=0;
	int* p = new int[10000];
	delete [] p;
	
	return a*largeur;

};




