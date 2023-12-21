/*3、需要求3个长方柱的体积，请编一个基于对象的程序。数据成员包括length(长)、width(宽)、height(高)。要求用成员函数实现以下功能：
(1)由键盘分别输入3个长方柱的长、宽、高；
(2)计算长方柱的体积；
(3)输出3个长方柱的体积。
请编程序，上机调试并运行。*/
#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length, width, height;
public:
	void setC()
	{
	    
		cout << "请输入长方体的长、宽、高:";
			cin >> length >> width >> height;

	}
	double calculation()
	{
		return length * width * height;
		
	}
	void showC()
	{
		cout << "长方体的体积为"<<calculation();
		

	}
};
int main()
{
	Cuboid c1, c2, c3;
	c1.setC();
	c2.setC();
	c3.setC();
	cout << endl;
	c1.showC();
	cout << endl;
	c2.showC();
	cout << endl;
	c3.showC();

}