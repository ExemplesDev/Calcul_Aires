#include <iostream>
#include <lib/Rectangle.h>
#include <lib/Triangle.h>

int main(int argc, char* argv[])
{

    std::cout << "Inititialisation du rectangle" << std::endl;

	Rectangle rectangle (3,4);
	rectangle.affiche();

    std::cout << "Inititialisation du triangle" << std::endl;

	Triangle triangle (2,5);
	triangle.affiche();


	std::cout << "aire du rectangle: " << rectangle.aire () << std::endl;
	std::cout << "aire du triangle: " << triangle.aire () << std::endl;


    
}
