#include<stdio.h>;
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;
void c1(ListNode* b1)
{
	char c = '0';
	ListNode* a1,a2=NULL;
	while (1)
	{
		printf("建立新节点请按1，按其他键退出");
		getchar(c);
		if (c != '1')
		{
			break;
		}
		a1 = (ListNode*)malloc(sizeof(ListNode);
		scanf_s("%d", *a1->val);
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
ListNode* c2(ListNode*b1)
{
	int a = 0;
	ListNode * a1,a2,a3=NULL;
	if (b1->next != NULL)
	{
		a3 = b1;
		while (1)
		{
			a1 = (ListNode*)malloc(sizeof(ListNode));
			*a1->val = a3->val;
			a1->next = NULL;
			if (*a2.next == NULL)
			{
				a2 = a1;
			}
			else
			{
				*a1->next = a2;
				a2 = a1;
			}
			a3 = *a3->next;
				if (*a3->next == NULL)
				{
					break;
				}
		}
	}
	return a1;
}
int main()
{
	ListNode* a1 = (ListNode*)malloc(sizeof(ListNode);
	*a1->next == NULL;
	c1(a1);
	ListNode*c3=c2(a1);
	return 0;
}