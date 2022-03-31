#pragma once
#include "Car.h"

class Bus
{
	Car car;
	int am_pas;
public:
	void set_am_pas(int a) { am_pas = a; }
	int get_am_pas() { return am_pas; }
	void set_mark(string a) { car.set_mark(a); }
	string get_mark() { return car.get_mark();}

	void init(int am_pas, Car car);

	string toString();
	void read();
	void display();
};

