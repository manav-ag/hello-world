#include<stdio.h>

typedef struct stackNode
{
	int data;
	struct stackNode *next;

}Node;



void push(Node** root,int data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data=data;
	newNode->next=NULL;
	root=newNode;

}
// void rev(Node *top)
// {
// 		Node *newNode = (Node*)malloc(sizeof(Node));
// 		Node *temp = (Node*)malloc(sizeof(Node));

// }
   void binary(Node *root)
{
	int i=0;
	char b[100];
	while(root->next!=NULL)
	{
		int temp = newNode->data;
		
		while(temp>0)
		{
			int d=temp%2;
			b[i]=d;
			temp=temp/2;
			i++;
		}
		root=root->next;
	}
	int j;
	for(j=i;j>=0;j--)
	{
		printf("%c\n",b[j]);
	}
}
