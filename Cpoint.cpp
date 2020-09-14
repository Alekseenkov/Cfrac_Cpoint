#include "Cpoint.h"


Cpoint::Cpoint()
{
	/*cout << "\nDefault constructor\n";*/
}

Cpoint::Cpoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

Cpoint::~Cpoint()
{
	/*cout << "\nDefault destructor\n";*/
	
}

double Cpoint::get_x()
{
	return x;
}

double Cpoint::get_y()
{
	return y;
}

void Cpoint::inputXY()
{
		cout << "\nInput X->";
		cin >> this->x;
		cout << "\nInput Y->";
		cin >> this->y;
}

double Cpoint::get_long_vector()
{
	return sqrt((x * x) + (y * y));;
}

Cpoint Cpoint::turn(double phi)
{
	return Cpoint((x * cos(phi) + y * sin(phi)),(-x * sin(phi) + y * cos(phi)));
}








