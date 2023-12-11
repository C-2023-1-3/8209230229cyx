#include<iostream>
using namespace std;
int main()
{
	double r, h, V;
	cout << "请输入圆锥的底面半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	V = r * r * h / 3;
	cout << "圆锥的体积为" << V << endl;
	system("pause");
		return 0;
}