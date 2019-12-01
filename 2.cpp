// laba2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int nod(int a, int b)
{
	while (a > 0 && b > 0)
	{
		if (a > b) a %= b;
		else b %= a;
	}
	return a + b;
}

class Pair {
protected:
	int n;
	int d;
public:
	Pair() :n(1), d(1) {} //конструктор с параметрами
	Pair(int A, int B) : n(A), d(B) {} //инициализация
	~Pair() {} //деструктор
};
class Rational :public Pair {
private:
	void def_form() //приводит дробь к виду a/b, где b>0 строго (по определению)
	{
		if (d < 0)
		{
			d *= -1;
			n *= -1;
		}
	}
	void reduce() //сокращение дроби
	{
		int nod_found = nod(abs(n), abs(d));
		n /= nod_found;
		d /= nod_found;
	}
public:

	Rational() : Pair() {};
	Rational(int A, int B) :Pair(A, B) { def_form(); reduce(); };


	//реализация операций

	Rational add(Rational r)
	{
		Rational frac(n * r.d + d * r.n, d * r.d);
		frac.reduce();
		return frac;
	}
	Rational sub(Rational r)
	{
		Rational frac(n * r.d - d * r.n, d * r.d);
		frac.reduce();
		return frac;
	}
	Rational mul(Rational r)
	{
		Rational frac(n * r.n, d * r.d);
		frac.reduce();
		return frac;
	}
	Rational div(Rational r)
	{
		try
		{
			if (r.n == 0) throw exception("you tried to divide by zero!\n");
			Rational frac(n * r.d, d * r.n);
			frac.reduce();
			return frac;
		}
		catch (exception &exp)
		{
			cerr << exp.what();
		}
	}
	bool equal(Rational r)
	{
		reduce();
		r.reduce();
		return (n == r.n) && (d == r.d);
	}
	bool greater(Rational r)
	{
		reduce();
		r.reduce();
		return sub(r).n > 0;
	}
	bool less(Rational r)
	{
		reduce();
		r.reduce();
		return sub(r).n < 0;
	}
	friend istream& operator >> (istream& in, Rational &r)
	{
		char c;
		in >> r.n;
		in >> c;
		in >> r.d;
		r.def_form();
		r.reduce();
		return in;
	};
	friend ostream& operator << (ostream& out, const Rational &r)
	{
		out << r.n << "/" << r.d;
		//out << endl;
		return out;
	};
};
int main()
{
	cout << "enter the fractions like 'a/b': " << endl;
	//Rational x(1, 2), y(0, 1);
	//Rational z = x.div(y); //две дроби по умолчанию и выброс эксепшена

	Rational first, second, for_reduce;

	cout << "first = ";
	cin >> first;
	cout << "second = ";
	cin >> second;
	cout << "enter fraction, which can be reduced. r = ";
	cin >> for_reduce;
	cout << endl;

	cout << "all your fractions: first = " << first << ", second = " << second << ", r = " << for_reduce << "." << endl << endl;

	cout << "add(first + second): " << first.add(second) << endl;
	cout << "sub(first - second): " << first.sub(second) << endl;
	cout << "mul(first * second): " << first.mul(second) << endl;
	cout << "div(first / second):" << first.div(second) << endl << endl;

	cout << "equal(second + r): " << second.equal(for_reduce) << endl;
	cout << "greater(second ? first): " <<second.greater(first) << endl;
	cout << "less(first ? r): " << first.less(for_reduce)<< endl << endl;

	system("pause");
	return 0;
}

