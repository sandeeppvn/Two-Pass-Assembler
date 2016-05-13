#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
	int data;
	int PC;
	char w[60];
	struct Node *next;
}front, *ptr=&front;

void add_front(struct Node* new_node)
{
	new_node->next=ptr;
	front=*new_node;
}

struct Node *searchElm(char word[])
{
	struct Node* cur=&front;
	while(cur && strcmp(word, cur->w)!=0)
   {
		cur=cur->next;
	}
	return cur;
}

void display()
{
	struct Node *cur=ptr;
	if(!cur) printf("List Empty");
	else
   {
		while(cur)
      {
			printf("%d  ",cur->w);
			cur=cur->next;
		}
	}
	printf("\n\n");
}
void cleanup()
{
	struct Node *cur=ptr;
	while(ptr)
   {
		ptr=front.next;
		free(cur);
	}
}
void scanTable(char word[])
{
	struct Node *cur=(struct Node *)searchElm(word);
	if(!cur)
   {
		struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
		new_node->w=word;
		add_front(new_node);
	}
}
void setData(char w[], int data)
{
	struct Node* cur=(struct Node*)searchElm(w);
	cur->data=data;
}
void main()
{
	scanTable("Fish");
	scanTable("Tuna");
	scanTable("Fish");
	setData("Fish", 10);
	display();
	cleanup();

}
