#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int X, int Y)
	{
		x = X;
		y = Y;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{   
		cout<<"�õ�������Ϊ��" << "(" << x << "," << y << ")";
	}
};

int main()
{
	Point p1(60,80);
	int i, j;
	cout << "���������������ֵ��";
	cin >> i;
	cout << "����������������ֵ��";
	cin >> j;
	p1.setPoint(i,j);
	p1.display();
	return 0;

}