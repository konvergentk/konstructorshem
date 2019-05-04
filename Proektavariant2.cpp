#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	cout << "enter a voltage = ";

	float voltage; //напряжение в цепи
	cin >> voltage;

	cout << "enter number block of resistors = ";

	float R = 0; //сопротивление в цепи

	float g = 0,
		r = 0,
		p = 0,
		r1 = 0,
		r2 = 0,
		r3 = 0,
		r4 = 0,
		r5 = 0,
		r6 = 0;

	int n,
		l,
		e,
		q,
		j,
		y;
	cin >> n;
	n = n - 1;
	float *arr = new float[n];
	for (int i = 0; i <= n; i++)
	{
		cout << "sodinenie kakoe 0 or 1 ";
		cin >> e;
		if (e == 0)
		{
			cout << "kolichestvo strok ";
			cin >> q;
			for (l = 0; l != q; l++) 
			{
				cout << "kol-vo v stroke ";
				cin >> j;
				float *helparr = new float[j];
				for (y = 0; y != j; y++) 
				{
					cout << "vvodim strochku ";
					cin >> r;
					r1 = r1 + r;
				}
				r2 = r2 + (1 / r1);
				r1 = 0;
			}
			r3 = r3 + (1 / r2);
		}
		else 
		{
			cout << "vvesti odno znachenie ";
			cin >> r4;
			r5 = r5 + r4;
		}
		R = r3 + r5;
	}

	delete[] arr;

	float amperage; //сила тока в цепи
	amperage = (voltage / R);

	float power; //мощность цепи
	power = voltage * amperage;

	cout << "enter the time = ";

	int t; //время работы
	float energy; //работа
	cin >> t;
	if (t != 0) 
	{
		energy = power * t;
	}
	cout << '\n' 
		<< "voltage = " << voltage << '\n'
		<< "resist = " << R << '\n'
		<< "amperage = " << amperage << '\n'
		<< "power = " << power << '\n'
		<< "time = " << t << '\n'
		<< "energy = " << energy << '\n';

	return 0;
}
