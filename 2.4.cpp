#include<iostream>
using namespace std;
int main()
{
	char x;
	double a, b;
	cin >> a;
	cin >> x;
	cin >> b;
	switch (x)
	{
	case '+':cout << a + b << endl; break;
	case '-':cout << a - b << endl; break;
	case'*':cout << a * b << endl; break;
	case'/':
	{if (b != 0)
		cout << a / b << endl;
	else
		cout << "除数不能为0" << endl;
	break;
	}cout << a / b << endl; break;
	case'%':
	{if (b != 0)
		cout << int(a) % int(b) << endl;
	else
		cout << "除数不能为0" << endl;
	break;
	}
	default:cout << "error";
	}

	return 0;
}