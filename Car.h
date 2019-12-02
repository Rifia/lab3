#pragma once
#include <string>
#include "Engine.h"
using namespace std;

class Car {

private: Engine engine;
		 string number, color;
		 int current_speed;

public: Car() {
	Engine engine = Engine();
	number = "default number";
	color = "default color";
	current_speed = 0;
}

public: Car(Engine e, string num, string c, int cs) {
	engine = e;
	number = num;
	color = c;
	current_speed = cs;
}

public: Engine getEngine() { return engine; };
		string getNumber() { return number; };
		string getColor() { return color; };
		int getCurrentSpeed() { return current_speed; };

public: void setEngine(Engine e) { engine = e; }
		void setNumber(string num) { number = num; }
		void setColor(string c) { color = c; }
		void setCurrentSpeed(int cs) { current_speed = cs; }

};
