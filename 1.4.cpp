#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?

	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
	cout << "output in int type:" << static_cast<int>(100) << endl;
	cout << "output in Oct unsigned int type:" << oct << int(100) << endl;

}