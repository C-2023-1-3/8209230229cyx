#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0, space = 0, digit = 0, others = 0;
    cout<<"please input some characters\n"<<endl;
    while ((c = getchar())!='\n')
    {
        if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
            letters++;
        else if (c ==' ')
            space++;
        else if (c >= '0' && c <= '9')
            digit++;
        else
            others++;
    }
    cout << "字母共有：" << letters << "个" << endl;
    cout << "空格共有：" << space << "个" << endl;
    cout << "数字共有：" << digit << "个" << endl;
    cout << "其他字符共有：" << others << "个" << endl;
    system("pause");
        return 0;
}