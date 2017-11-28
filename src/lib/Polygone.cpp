#include "Polygone.h"


Polygone::Polygone (int a, int b) {
   largeur=a; 
   hauteur=b;
}

int Polygone::getLargeur () const {
   return largeur;
}

int Polygone::getHauteur () const {
   return hauteur;
}


void Polygone::affiche () const {
   std::cout << "largeur:" << largeur << "\n";
   std::cout << "longueur:" << hauteur << "\n";

}
