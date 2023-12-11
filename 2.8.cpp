#include<iostream>
using namespace std;
int main()
{
	int a;
	double n, i;
	cout << "请输入一个非负数" << endl;
	cin >> a;
	{
		for (n = a, i = (n + a / n) / 2; fabs(i - n) > 1e-5; n = i, i = (n + a / n) / 2);
		
	}
		cout << a << "的算数平方根为" << i << endl;
	system("pause");
	return 0;
		

}