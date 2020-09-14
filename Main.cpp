#include <iostream>
#include"Cfrac.h"
#include"Cpoint.h"

using namespace std;

int main()
{
	const double pi = 3.14;
	
	double i =3;/// 2радианы
	/*///умолчание 
	Cpoint Point1;
	Point1.~Cpoint();
	/// ///////////////*/
	

	Cpoint point(0,0);

	point.inputXY();
	cout << "\nx=" << point.get_x()<< endl;
	cout << "\ny=" << point.get_y() << endl;
	 cout <<"LongVector"<< point.get_long_vector() << endl;
	  
	 auto point1 = point.turn(pi / i);

	 cout << "Rotation of a vector by" <<i<< "radians its coordinates"<<  " x=" << point1.get_x()
	 <<" y=" << point1.get_y() << endl;

	 ////////////////////////////////////////////////////////////////////////////////////////////////

	 Cfrac frac(0, 0);

	 frac.inputPQ();
	 
	 cout << "\nFraction In Number="<< frac.fraction_in_number();


	 auto frac1 = frac.simplifying();
	 cout << "\nP/Q=" << frac1.get_p()<<'/'<< frac1.get_q() << endl;

	 ////////////////////////////////////////////////////////////////////////////////////////////
	  
	/* Cpoint a(3, 3);
	 Cpoint b;
	 b = a;
	 cout << "\nx=" << b.get_x() << endl;
	 cout << "\ny=" << b.get_y() << endl;*/

	 ////////////////////////////////////////////////////////////////////////////////////////////////

	Cfrac a(1, 2);
	Cfrac b(1, 4);
	Cfrac c(0, 0);
	 try
	 {
		 c = a/b ;

		 cout << c.get_p()<<"/";
		 cout << c.get_q();

		 auto c1 = c.simplifying();
		 cout << "\nP/Q=" << c1.get_p() << '/' << c1.get_q() << endl; 


	 }
	 catch (const std::exception& ex)
	 {
		 setlocale(LC_ALL, "Russian");
		 
		 cout << ex.what();
	 }

	 return 0;
}

