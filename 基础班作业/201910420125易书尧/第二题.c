#include<stdio.h>;
void swap(int*b1,int* b2)
{
	int a;
	a = *b1;
	*b1 = *b2;
	*b2 = a;
}
int main()
{
	int a1[5] = { 1,2,3,4,5 };
	int a2[5] = { 5,4,3,2,1 };
	for (int i = 0; i < 5; i++)
	{
		swap(&a1[i], &a2[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a1[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a2[i]);
	}
}