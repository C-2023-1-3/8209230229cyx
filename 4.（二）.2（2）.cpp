/*编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，
并在主函数中测试。函数原型 int parseHex(const char *const
hexString);
如：调用函数 parseHex(“A5”);返回165*/
#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
    int sum = 0;
    int len= strlen(hexString);
    for (int i = 0; i < len; i++)
    {
        char currentChar = hexString[i];
        int m;
        if (currentChar >= '0' && currentChar <= '9')
        {
            m = currentChar - '0';
        }
        else if (currentChar >= 'A' && currentChar <= 'F')
        {
            m = currentChar - 'A' + 10;
        }
        else if (currentChar >= 'a' && currentChar <= 'f') 
        {
            m = currentChar - 'a' + 10;
        }
        sum = sum *16 + m;
    }
    return sum;
}
int main() 
{
    const int maxLen = 100;
    char hexString[maxLen];
    cout << "请输入一个字符串: ";
    cin.getline(hexString, maxLen);
        int result = parseHex(hexString);
    cout <<  result << endl;

        return 0;
}

