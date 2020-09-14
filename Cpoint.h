#pragma once
#include<math.h>
#include <iostream>
using namespace std;

class Cpoint
{
public:
	Cpoint();
	Cpoint(double x , double y );
	~Cpoint();
	double get_x();
	double get_y();
	void inputXY();
	double get_long_vector();
	Cpoint turn(double phi);
	
private:
	double x;
	double y;

};

