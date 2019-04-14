#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	cout << "enter a voltage = ";

	float voltage; //напряжение в цепи
	cin >> voltage;

	cout << "enter number of resistors = ";

	float R = 0; //сопротивление в цепи
	int n;
	cin >> n;
	n = n - 1;
	float *arr = new float[n];
	float g = 0;
	for (int i = 0; i <= n; i++)
	{
		cout << "resistance " << i + 1 << " = ";
		cin >> g;
		arr[i] = g;
		R = R + g;
	}

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

	delete[] arr;
	return 0;
}
