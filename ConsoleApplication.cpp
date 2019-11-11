// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vector3D.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");

	vector3D vector1;

	vector3D v;
	cout << v;

	vector1.inputVector();   //присвоим новые значения переменным
	vector1.outputVector();
	system("pause");

}
