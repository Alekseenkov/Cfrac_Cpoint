#include "Cfrac.h"

Cfrac::Cfrac(int p, int q)
{
	this->p = p;
	this->q = q;
}

Cfrac::Cfrac()
{
}

Cfrac::~Cfrac()
{
}



int Cfrac::get_p()
{
	return p;
}

int Cfrac::get_q()
{
	return q;
}

double Cfrac::fraction_in_number()
{
	return static_cast<double>(p) / q;
}

Cfrac Cfrac::simplifying()
{
	return Cfrac((p / gcd(p, q)) , (q / gcd(p, q)));
}

void Cfrac::inputPQ()
{
	cout << "\nInput P->";
	cin >> this->p;
	while (true)
	{
		cout << "\nInput Q->";
		cin >> this->q;
		if (this->q != 0)
			break;
	}
	
}

Cfrac Cfrac::operator+(const Cfrac& other)
{
	int  Nok= this->q * other.q / gcd(this->q, other.q);

	return Cfrac(((this->p * (Nok / this->q)) + (other.p * (Nok / other.q))), Nok);
}

Cfrac Cfrac::operator-(const Cfrac& other)
{
	int  Nok = this->q * other.q / gcd(this->q, other.q);

	return Cfrac(((this->p * (Nok / this->q)) - (other.p * (Nok / other.q))), Nok);
}

Cfrac Cfrac::operator*(const Cfrac& other)
{
	return Cfrac((this->p* other.p), (this->q * other.q));
}

Cfrac Cfrac::operator/(const Cfrac& other)
{
	if (other.p==0)
		throw exception("Error!!\n На ноль нельзя! ");/// переделать

	return Cfrac((this->p * other.q), (this->q * other.p));
}


