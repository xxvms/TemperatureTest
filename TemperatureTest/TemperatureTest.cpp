// TemperatureTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "std_lib_facilities.h"


int main()
{
	vector<double>temps; // temperature

	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;

	for (int x : temps)
	{
		if (x > high_temp) high_temp = x; // find high temp
		if (x < low_temp) low_temp = x; // find low temp
		sum += x; // compute temperatures
	}

	cout << "High temperature: " << high_temp << endl;
	cout << "Low temeperature: " << low_temp << endl;
	cout << "Average temperature: " << sum / temps.size() << endl;


	system("pause");
    return 0;
}

