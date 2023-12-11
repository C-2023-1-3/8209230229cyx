/*字符串中每个字母出现的次数：
请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
void count(const char s[], int counts[])
counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录
a，b，…，z出现的次数。字母不分大小写，例如字母A和字母a都被看作a。
编写测试程序，读入字符串并调用count函数，显示非零的次数。
下面是程序的一个运行样例：*/
#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int j = 0; j < 26; j++)
		counts[j] = 0;
	int len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			counts[s[i] - 'a']++;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			counts[s[i] - 'A']++;
		
	}
}
int main()
{
	int counts[26];
	const int maxlen = 100;
	char s[maxlen];
	cout << "Enter a string:";
	cin.getline(s, maxlen);
	count(s, counts);
	for (int i = 0; i < 26 - 1; i++)
	{
		if (counts[i] != 0)
			cout << char('a' + i) << ":" << counts[i] << " times" << endl;
	}
	return 0;
}