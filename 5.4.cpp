/*4������һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ���������һ������max��
��ָ������ָ����������������max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�
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
	cout << "������ѧ����ѧ�źͳɼ���" << endl;
	for (int i = 0; i < 5; i++)
	{
		long n;
		int m;
		cin >> n >> m;
		stu[i].Input(n, m);
	}
	long maxno = Student::max(stu, 5);
	cout << "��߳ɼ��ߵ�ѧ��Ϊ��" << maxno;
	return 0;
}
