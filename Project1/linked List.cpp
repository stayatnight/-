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
//ͷ�巨����������
void print(LNode*head)
{
	LNode*p;
	p = head->next;
	printf("������ĳ����ǣ�%d\n",head->data);
	printf("�����������\n");
	for (int i = 0; i < head->data; i++)
	{
		printf("%d\n", p->data);
	p=p->next;//�������ⷸ����һ���Ĵ��󡣡���
	}
}
//�������������
int Get_Elem(int i,LNode*head)
{





}
//����Ų���
int main()
{
	LNode*head;
	head = creat_LinkList();//���ú��������շ���ֵ
	print(head);
	system("pause");
	return 0;
}
