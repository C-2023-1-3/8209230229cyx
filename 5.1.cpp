#include<iostream>
using namespace std;
class Time             
{
private:              
		int hour;
	int minute;
	int sec;
public:
	void timeset(int h = 0,int m=0,int s=0)
	{
		hour = h;
		minute = m;
		sec = s;
	}
	void timeshow()
	{ 
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time tl;
	int h,m, s;
	cin >> h;      
	cin >> m;
	cin >> s;
	tl.timeset(h,m,s);
	tl.timeshow();
	return 0;
}