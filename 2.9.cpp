/*苹果每个 0.8 元，第一天买 2 个，
第二天开始，每天买前天的 2 倍，
直到单次购买的苹果数不超过100的最大值，求每天平均花多少钱。*/
#include<iostream>
using namespace std;
int main()
{
	int x=2,day = 0;
	double y = 0.0;
	while (x <= 100)
	{	y = 0.8 * x + y;
	    x = x * 2;
		day = day + 1;
    
	}
	cout << "平均每天花" << double(y)/ day << "元" << endl;
	system("pause");
	return 0;
}