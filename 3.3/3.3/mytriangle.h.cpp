#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{   
	double fah;
	fah = 1.8 * cel + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	double cel;
	cin >> fah;
	cel = 5 * (fah - 32) / 9;
	return cel;
}