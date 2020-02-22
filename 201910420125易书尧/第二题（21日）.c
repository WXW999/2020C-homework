#include<stdio.h>;
typedef struct Student
{
	char name[20];
	char stu_id[15];
	int age;
	struct Student* next;
}student;
student* c1(student* b1)
{
	char c = '0';
	student* a1,a2=NULL;
	while (1)
	{
		printf("建立新节点请按1，按其他键退出");
		getchar(c);
		if (c != '1')
		{
			break;
		}
		a1 = (student*)malloc(sizeof(student);
		gets_s(*a1.name);
		gets_s(*a1.stu_id);
		scanf_s("%d", *a1.age);
		a1->next = NULL;
		if (*b1->next == NULL)
		{
			*b1->next = a1;
		}
		if (*a2 == NULL)
		{
			a2 = a1;
		}
		else
		{
			*a2.next = a1;
			a2 = a1;
		}
	}
	return 0;
}
void c2(student* b1)
{
	puts(*b1.name);
	puts(*b1.stud_id);
	printf("%d", *b1.age);
	return 0;
}
void cha(student*b1)
{
	char a = '0';
	if (*a1->next == NULL)
	{
		c1(b1);
	}
	else
	{
		student* a1=*b1.next;
		while (1)
		{
			if (*a1->next == NULL)
			{
				break;
			}
			c2(a1);
			a1 = *a1->next;
		}
		printf("是否建立新节点，按1继续，按其他键以退出")
			getchar(a);
		if (a == '1')
		{
			c1(a1);
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	student* a1 = (student*)malloc(sizeof(student);
	*a1->next = NULL;
	cha(a1);
	return 0;
}