#include "Car.h"

void Car::init(string mark, int am_cil, double power)
{
	this->mark = mark;
	this->am_cil = am_cil;
	this->power = power;
}

string Car::toString()
{
	stringstream sout;
	sout << "mark = " << mark << endl <<
		"amount of cilinder = " << am_cil << endl << 
		"power = " << power << endl;
	return sout.str();
}

void Car::read()
{
	string mark;
	int am_cil;
	double power;
	cout << "mark = "; cin >> mark;
	cout << "amount of cilinder = "; cin >> am_cil;
	cout << "power = "; cin >> power;
	init(mark, am_cil, power);
}

void Car::display()
{
	cout << toString();
}
