/*4、建立一个对象数组，内放5个学生的（学号，成绩），设立一个函数max，
用指向对象的指针作函数参数，在max函数中找出5个学生的最高成绩者，并输出其学号。
*/
#include<iostream>
using namespace std;
class Student
{
private:
	long no;
	int score;
public:
	void Input(long No, int Score)
	{
		no = No;
		score = Score;
	};
	static long max(Student* stu, int size);
};
long Student::max(Student* stu, int size)
{
	int maxscore = stu[0].score;
	long maxno = stu[0].no;

	for (int s = 1; s < size; s++)
	{
		if (stu[s].score > maxscore)
		{
			maxscore = stu[s].score;
			maxno = stu[s].no;
		}
	}

	return maxno;
}
int main()
{
	Student stu[5];
	cout << "请输入学生的学号和成绩：" << endl;
	for (int i = 0; i < 5; i++)
	{
		long n;
		int m;
		cin >> n >> m;
		stu[i].Input(n, m);
	}
	long maxno = Student::max(stu, 5);
	cout << "最高成绩者的学号为：" << maxno;
	return 0;
}
