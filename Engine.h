#pragma once
#include <string>
using namespace std;


class Engine {

private:
	int power, speed, fuel_vol;
	string fuel;

public: Engine(){
	power = 0;
	speed = 0;
	fuel_vol = 0;
	fuel = "default";
}

public: Engine(int p, int s, int v, string f){
	power = p;
	speed = s;
	fuel_vol = v;
	fuel = f;
}

public: int acceleration(int fv) {
	speed *= fv;
}

public: int getPower()   { return power; };
		int getSpeed()   { return speed; };
		int getFuelVol() { return fuel_vol; };
		string getFuel() { return fuel;  };

public: void setPower(int p)   { power = p; }
		void setSpeed(int s)   { speed = s; }
		void setFuelVol(int v) { fuel_vol = v; }
		void setFuel(string f) { fuel = f; }

friend ostream& operator<<(ostream& s, Engine& e)
{
	s << "Engine: power = " << e.getPower() << ", speed = " << e.getSpeed() << ", fuel volume = " << e.getFuelVol() << ", fuel type = " << e.getFuel() << "." << endl;
	return s;
}

};



