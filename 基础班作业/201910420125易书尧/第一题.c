#include <stdio.h>
#define M 5;
void fun(int tt[5][5], int pp[5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j == 0)
			{
				pp[i] = tt[j][i];
			}
			if (pp[i] > tt[j][i])
			{
				pp[i] = tt[j][i];
			}
		}
	}
}
int main()
{
	int a1[5][5] = 
	{ {1,23,4,56,6},{123,4,5,732,1},{1233,2,4,6541,2},{15,3,0,1,5},{9,8,7,4,5} };
	printf("%d\n", a1[2][1]);
	int a2[5];
	fun(a1, a2);
	printf("%d\n", a1[2][1]);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", a2[i]);
	}
}
