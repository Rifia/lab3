#include "stdafx.h"
#include "vector3D.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	vector3D vector1;

	vector1.inputVector();

	cout << vector1;
	system("pause");

}
