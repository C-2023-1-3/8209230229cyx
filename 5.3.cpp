/*3����Ҫ��3������������������һ�����ڶ���ĳ������ݳ�Ա����length(��)��width(��)��height(��)��Ҫ���ó�Ա����ʵ�����¹��ܣ�
(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
(2)���㳤�����������
(3)���3���������������
�������ϻ����Բ����С�*/
#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length, width, height;
public:
	void setC()
	{
	    
		cout << "�����볤����ĳ�������:";
			cin >> length >> width >> height;

	}
	double calculation()
	{
		return length * width * height;
		
	}
	void showC()
	{
		cout << "����������Ϊ"<<calculation();
		

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