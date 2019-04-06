#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

struct resistor {
	float resistance; // значение сопротивления на одном резисторе
};

int main() {
	cout << "enter a voltage";

	float voltage; //напряжение в цепи
	cin >> voltage;

	float R; //сопротивление в цепи
	cin >> R;

	float amperage; //сила тока в цепи
	amperage = (voltage / R);

	float power; //мощность цепи
	power = voltage * amperage;

	int t; //время работы
	float energy; //работа
	cin >> t;
	if (t != 0) {
		energy = power * t;
	}
	cout << voltage << " " << R << " " << amperage << " " << power << " " << t << " " << energy;
	return 0;
}
