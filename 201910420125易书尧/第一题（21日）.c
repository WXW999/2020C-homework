#include<stdio.h>;
typedef struct Student
{
	char name[20];
	char stu_id[15];
	int age;
	char  sex[5];
	struct Student* next;
}student;
student* find_id(char id[],student stus[],int num)
{
	student* b = NULL;
	int a = 0;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (id[j] != stus[j].stu_id)
			{
				a = 0;
				break;
			}
			a = 1;
		}
		if (a = 1)
		{
			b = &stus[i];
			break;
		}
	}
	return b;
}
int main()
{
	student a1[10];
	char id[10];
	student* a2 = find_id(id[], a1[], 10);
	return 0;
}