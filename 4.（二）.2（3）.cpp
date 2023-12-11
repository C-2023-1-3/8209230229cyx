/*(3)主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，
动态调试观察指针及指针指向的内容；设计一个函数对数组由小到大排序；
主程序中用指针方式输出数组元素；
最后释放数组内存（delete）。*/
#include<iostream>
using namespace std;
void M(int a[], int size);
int main()
{
	cout << "请输入元素个数: ";
	int size;
	cin >> size;

	int* a = new int[size];

	cout << "请输入数组元素:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	M(a, size);
	for (int i = 0; i < size; i++)
	{
		cout << *(a + i) << " ";
	}
	delete[]a;
	return 0;
}
void M(int a[],int size)
{
	for (int i = 0;i<size;i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t;
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
		
}