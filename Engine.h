#pragma once
#include <string>
#include <iostream>
using namespace std;


class Engine {

private:
	int power, num_revol, fuel_vol;
	string fuel;

public: Engine() {
	power = 0;
	num_revol = 0;
	fuel_vol = 0;
	fuel = "default";
}

public: Engine(int p, int nr, int v, string f) {
	power = p;
	num_revol = nr;
	fuel_vol = v;
	fuel = f;
}

public: void acceleration(int fv) {
	num_revol += fv * 5;
}

public: int getPower() { return power; };
		int getNumRevol() { return num_revol; };
		int getFuelVol() { return fuel_vol; };
		string getFuel() { return fuel; };

public: void setPower(int p) { power = p; }
		void setNumRevol(int s) { num_revol = s; }
		void setFuelVol(int v) { fuel_vol = v; }
		void setFuel(string f) { fuel = f; }

		friend ostream& operator<<(ostream& s, Engine& e)
		{
			s << "Engine: power = " << e.getPower() << ", speed = " << e.getNumRevol() << ", fuel volume = " << e.getFuelVol() << ", fuel type = " << e.getFuel() << "." << endl;
			return s;
		}

public: void inputEngine()
{

	cout << "input engine parameters" << endl;
	cout << "power(int): ";
	cin >> power;
	cout << "fuel(string): ";
	cin >> fuel;
	cout << "number of revolutions(int): ";
	cin >> num_revol;
	cout << "fuel volume(): ";
	cin >> fuel_vol;
}

};

