#include<stdio.h>
#include<stdlib.h>
typedef struct Linkedlist
{	
	int data;
	struct Linkedlist *next;
}LNode;
LNode*creat_LinkList()
{	
	int data1;
	LNode*head, *p;
	head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	printf("Please input the size of Linkedlist\n");
	scanf_s("%d", &head->data);
	system("cls");
	printf("please input data!\n");
	for(int i=0;i<head->data;i++)
	{
		scanf_s("%d", &data1);
		if (data1 == 32767)break;
		p = (LNode*)malloc(sizeof(LNode));
		p->data = data1;
		p->next = head->next;
		head->next = p;
	}
	return(head);
}
//头插法创建单链表
void print(LNode*head)
{
	LNode*p;
	p = head->next;
	printf("单链表的长度是：%d\n",head->data);
	printf("链表的内容是\n");
	for (int i = 0; i < head->data; i++)
	{
		printf("%d\n", p->data);
	p=p->next;//曾经在这犯了猪一样的错误。。。
	}
}
//遍历单链表并输出
int Get_Elem(int i,LNode*head)
{





}
//按序号查找
int main()
{
	LNode*head;
	head = creat_LinkList();//调用函数并接收返回值
	print(head);
	system("pause");
	return 0;
}
