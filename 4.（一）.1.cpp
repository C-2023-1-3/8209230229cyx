#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int A[10];
	cout << "请输入十个数" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	cout << A[0]<<" ";
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (A[i] != A[j])
			{
				if (j == i-1)
					cout << A[i] << " ";
				else
					continue;
			}
			else
				break;
		}
	}
	
	return 0;
}