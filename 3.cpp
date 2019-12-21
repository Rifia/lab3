// laba3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Engine.h"
#include "Car.h"
#include <iostream>
using namespace std;


int main()

{

	Car c;
	Engine e;
	
	int sd, ac;


	e.inputEngine();
	cout << endl << endl;
	c.inputCar();
	cout << endl;
	cout << e << endl;
	cout << c << endl;


	cout << "slowdown - km/h?:  ";
	cin >> sd;
	c.slowdown(sd);
	cout << "current speed: " << c.getCurrentSpeed() << endl << endl;

	cout << "acceleration - km/h?:  ";
	cin >> ac;
	c.acceler(ac);
	cout << "current speed: " << c.getCurrentSpeed() << endl << endl;


	cout << "acceleration: ";
	e.acceleration(e.getFuelVol());
	cout << e.getNumRevol() << endl;
	system("pause");

    return 0;
}

