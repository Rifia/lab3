#pragma once
#include <string>
#include "Engine.h"
#include <iostream>
using namespace std;

class Car {

protected: Engine engine;
		 string number, color;
		 int current_speed;

public: Car() {
	Engine engine = Engine();
	number = "default number";
	color = "default color";
	current_speed = 0;
}

public: Car(Engine e, string num, string c, int cs) {
	Engine engine = e;
	number = num;
	color = c;
	current_speed = cs;
}

public: void slowdown(int k) { 
	current_speed -= k;
}
public: void acceler(int k) {
	current_speed += k;
}


public: Engine getEngine() { return engine; };
		string getNumber() { return number; };
		string getColor() { return color; };
		int getCurrentSpeed() { return current_speed; };

public: void setEngine(Engine e) { engine = e; }
		void setNumber(string num) { number = num; }
		void setColor(string c) { color = c; }
		void setCurrentSpeed(int cs) { current_speed = cs; }

		friend ostream& operator<<(ostream& s, Car& c)
		{
			s << "Car: number = " << 
				c.number << ", color = " << c.color << ", current speed = " << c.current_speed << "." << endl;
			return s;
		}

public: void inputCar()
{
	cout << "input car parameters" << endl;
	cout << "number(string): ";
	cin >> number;
	cout << "color(string): ";
	cin >> color;
	cout << "current speed: ";
	cin >> current_speed;
}

};
