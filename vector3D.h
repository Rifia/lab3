#pragma once
#include "stdafx.h"
#include <iostream>
#include <cassert>
using namespace std;

class vector3D
{

private:
	int a;
	int b;
	int c;

public: vector3D() { //по умолчанию
	a = 0;
	b = 0;
	c = 0;
}

public: vector3D(int _a, int _b, int _c = 2) { //с параметрами
	c = _c;
	a = _a;
	b = _b;
}


public: void inputVector()
{

	cout << "а(int): ";
	cin >> a;
	cout << "b(int): ";
	cin >> b;
	cout << "c(int): ";
	cin >> c;
}

		void outputVector()
		{
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			cout << "c = " << c << endl;
		}

public:	int getA() { return a; }
		int getB() { return b; }
		int getC() { return c; }

public: void setA(int _a)
{
	a = _a;
}
		void setB(int _b)
		{
			b = _b;
		}
		void setC(int _c)
		{
			c = _c;
		}

friend std::ostream& operator<<(std::ostream& s, vector3D& v)
		{
			s <<"("<< v.getA() << "; " << v.getB() << "; " << v.getC() <<")"<<endl;
			return s;
		}

};
