#include<iostream>
#include "mytemperature.cpp"
using namespace std;
int main()
{

	double a, b;
	cout << "请输入摄氏温度" << endl;
	cin >> a;
	b = celsius_to_fah(a);
	cout << "对应的华氏温度为" << b << "℉" << endl;


	double x, y;
	cout << "请输入华氏温度" << endl;
	cin >> x;
	y = celsius_to_fah(x);
	cout << "对应的摄氏温度为" << y << "℉" << endl;
	return 0;
}