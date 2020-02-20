#include<stdio.h>;
void swap(int*b1,int* b2)
{
	int a;
	a = *b1;
	*b1 = *b2;
	*b2 = a;
}
int* max(int c1[10])
{
	int* c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			c = &c1[i];
		}
		if (*c > c1[i])
		{
			c = &c1[i];
		}
	}
	return c;
}
int* min(int c1[10])
{
	int* c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			c = &c1[i];
		}
		if (*c < c1[i])
		{
			c = &c1[i];
		}
	}
	return c;
}
int main()
{
	int a1[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a1[i]);
	}
	int* d1 = max(a1);
	int* d2 = min(a1);
	swap(d1, &a1[0]);
	swap(d2, &a1[9]);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a1[i]);
	}
}