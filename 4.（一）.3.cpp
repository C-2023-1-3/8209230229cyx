#include<iostream>
using namespace std;
int main()
{
	bool M[100];
	for (int a = 0; a < 100; a++)
	{
		M[a] = false;
	}
	for (int j = 0; j < 100; j++)
	{
		for (int i = j; i < 100; i = i + j + 1)
		{
			switch (M[i])
			{
			case true:M[i] = false; break;
			case false:M[i] = true; break;
			}
		}
	}
	cout << "开着的柜子号码是：";
	for (int m = 0; m < 100; m++)
		if(M[m])
		cout << m+1<<" ";
	return 0;
}