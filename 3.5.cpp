/*
5、猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，
问，第一天猴子共摘多少桃子（用递归实现）。*/
#include<iostream>
using namespace std;
int A(int a)
{
	int i=0;
	if (a == 1)
		i = 1;
	else
	{
		i = 2*(A(a-1)+1);
	}
	return (i);

}
int main()
{
	int days;
	cout << "请输入天数" << endl;
	cin >> days;
	if(days>=1)
	cout <<"第一天猴子摘的桃子的总数是" << A(days) << endl;
	return 0;
}