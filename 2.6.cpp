#include<iostream>
using namespace std;
int main()
{
	int a, b, n, i;
	cout << "请输入两个数" << endl;
	cin >> a >> b;
	if (a > 0 && b > 0)
	{

		for (i = (a <= b ? a : b); i > 1; i--)
		{
			if (a % i == 0 && b % i == 0)
				break;
		}
		for (n = (a >= b ? a : b); n < a * b; n++)
		{
			if (n % a == 0 && n % b == 0)
				break;
		}
	}
	else
		cout << "请输入两个正整数！！" << endl;
	 
	cout << a << "和" << b << "的最大公约数为" << i << endl;
	cout << a << "和" << b << "的" << "最小公倍数为" << n << endl;
	system("pause");
	return 0;
}