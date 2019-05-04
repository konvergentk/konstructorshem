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

	int q;

	float g = 0, r = 0, p = 0;

	int n, l, e;//хз как работающий пиздец, делал на ощуп
	cin >> n;
	n = n - 1;
	float *arr = new float[n];
	for (int i = 0; i <= n; i++)
	{
		cout << "resistors in block ";
		cin >> q;
		if (q > 1)
		{
			q = q - 1;
			int *help_arr = new int[q];
			for ( l = 0; l <= q; l++)
			{
				cout << "resistance " << q + 1 << " = ";
				cin >> g;
				help_arr[l] = g;
				g = 1 / g;
				p = p + g;
			}
			r = 1 / p;
		}
		else
		{
			cout << "resistance " << i + 1 << " = ";
			cin >> g;
			arr[i] = g;
			r = g;
		}
		R = R + r;
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
