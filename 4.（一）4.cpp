#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
		list3[i] = list1[i];
	for (int j = 0; j < size2; j++)
		list3[size1+j] = list2[j];
	for (int n = 0; n < size1 + size2-1; n++)
	{
		for (int m = 0; m < size1 + size2 - 1 - n; m++)
		{
			if (list3[m] > list3[m + 1])
			{
				int t;
				t = list3[m + 1];
				list3[m + 1] = list3[m];
				list3[m] = t;

			}
		}
	}
}
int main()
{
	int size1, size2;
    int list1[80], list2[80], list3[160];

	cout << "Enter list1£º ";
	cin >> size1;
	for (int a = 0; a < size1; a++)
		cin >> list1[a];
	cout << "Enter list2£º ";
	cin >> size2;
	for (int b = 0; b < size2; b++)
		cin >> list2[b];
	cout << "The merged list is£º ";
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is ";
	for (int c = 0; c < size1 + size2; c++)
		cout << list3[c]<<" ";
	return 0;

} 
