#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "请输入华氏温度（单位：℃）" << endl;
	cin >> a;
	b = 1.8*(a - 32);
	cout << "转换为摄氏温度为" << b << "F";
	return 0;

}