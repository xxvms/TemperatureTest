// TemperatureTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "std_lib_facilities.h"


int main()
{
	double sum = 0;
	double high_temp = -1000; // initializate to imposibly low
	double low_temp = 1000; // initializate to imposibly high
	int no_of_temps = 0;

	//vector<double>temps; // temperature

	for (double temp; cin >> temp;) //read temp
	{
		++no_of_temps; //count temperatures
		sum += temp; // compute sum
		if (temp > high_temp)high_temp = temp; //find high
		if (temp < low_temp) low_temp = temp; // find low
	}

	cout << "High temperature: " << high_temp << endl;
	cout << "Low temeperature: " << low_temp << endl;
	cout << "Average temperature: " << sum / no_of_temps << endl;


	system("pause");
    return 0;
}

