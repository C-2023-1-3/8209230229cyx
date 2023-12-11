#include<iostream>
using namespace std;
int A(int &refx,int &refy)
{
	int i;
	for (i = (refx < refy ? refx : refy);i>0; i--)
	{
		if (refx % i == 0 && refy % i == 0)
			break;
	}
			return i;
}
int main()
{
	int m,n;
	cout << "请输入两个自然数" << endl;
	cin >> m >> n;
	cout << "最大公约数为" << A(m, n) << endl;
	cout << "最小公倍数为" << m * n / A(m, n) << endl;
	return 0;
}