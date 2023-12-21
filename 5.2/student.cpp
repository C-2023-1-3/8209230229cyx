#include <iostream>
#include"student.h"
using namespace std;
void Student::set_value(int Num,const char *Name,char Sex)
{
    num = Num;
    for (int i = 0; i < sizeof(name); i++)
        name[i] = Name[i];
    sex = Sex;
  
}
void Student::display()         
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}