/*编写函数检查字符串s1是否为字符串s2的子串，若是，
返回第一次匹配的下标，否则返回-1。在主程序中输入字符串s1与s2，
调用函数实现。
函数原型：int indexof(const char *s1,const char *s2);*/
#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for(int i=0;i<=len2-len1;i++)
	{
		bool match = true;
		for (int j = 0; j < len1; j++)
		{
			if (s1[i] != s2[i + j])
				match = false;
			break;
		}
		if(match)
		{
			return i;
		}
	}
	return -1;
}
int main() 
{
	const int MAXlen = 50;
	char s1[MAXlen], s2[MAXlen];

	cout << "Enter the first string: ";
	cin.getline(s1, MAXlen);

	cout << "Enter the second string: ";
	cin.getline(s2, MAXlen);

	cout << "indexof(" << s1 << "," << s2 << ")is " << indexof(s1, s2);

	return 0;
}