#include "Bus.h"

void Bus::init(int am_pas, Car car)
{
	this->car = car;
	this->am_pas = am_pas;
}

string Bus::toString()
{
	stringstream sout;
	sout << car.toString() << "amount of passangers = " << am_pas << endl;
	return sout.str();
}

void Bus::read()
{
	int am_pas;
	car.read();
	cout << "Amount of passengers = "; cin >> am_pas;
	init(am_pas, car);

}

void Bus::display()
{
	cout << toString();
}
