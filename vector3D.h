#include "stdafx.h"
#include <iostream>
using namespace std;

    class vector3D
    {

	    public: vector3D() {
		    a = 0;
		    b = 0;
		    c = 0;
	    }
	    
	    private: 
		int a;
		int b;
		int c;

		int getA() { return a };
		int getB() { return b };
		int getC() { return c };


		void setVector() 
		{
			cout << "Введите целое число а: ";
			cin >> a;
			cout << "Введите целое число b: ";
			cin >> b;
			cout << "Введите целое число c: ";
			cin >> c;
		}

		void getVector() 
		{
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			cout << "c = " << c << endl;
		}

    }
