#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node*start=NULL,*last=NULL,*temp,*t1,*t2;
void first_insert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
		last->link=temp;
	}
}
void last_insert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter an element to store in a node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start=NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->link=last->link;
		last->link=temp;
		last=temp;
	}
}
void middle_insert()
{
	int e,pos,i=1;
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	printf("\n enter the position to insert");
	scanf("%d",&pos);
	if(start=NULL)
	{
		start=temp;
	}
	else
	{
		printf("\n inside of middle insert fun");
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		temp->link=t2->link;
		t2->link=temp;
	}
}
void first_delete()
{
	if(start=NULL)
	{
		printf("\n\t linked list is empty,no nodes to perform delete operation");
	}
	else
	{
		start=start->link;
		last->link=start;
		printf("\n first node is deleted successfully");
	}
}
void last_delete()
{
	if(start==NULL)
	printf("\n No Nodes in Linked List to delete");
	else
	{
	    t1=start;
		while(t1->link!=last)
		{
			t2=t1;
			t1=t1->link;
		}
			t1->link=start;
			last=t1;
		}
	}
void middle_delete()	 
{
	int pos,i=1;
	printf("\n Enter the position to delete the Node");
	scanf("%d",&pos);
	if(start==NULL)
	printf("\n No Element to Delete, Linked List is EMPTY");
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
				
			t2->link=t1->link;
	}
}
void disp()
	{
		if(start==NULL)
		{
		printf("\n No elements in Linked List................");
		}
		else
		{
		printf("\n\t\tLinked List elements are................");
		t1=start;
		while(t1->link!=start)
			{
				printf(" %d",t1->data);
				t1=t1->link;
			}
				printf("  %d ",t1->data);
		}
	}
int main()
	{
	int ch;
	while(1)
		{
			printf("\n\t\t\t-----Linked List Operations-------");
			printf("\n\n\t\t1. First Insert");
			printf("\n\n\t\t2. Last Insert");
			printf("\n\n\t\t3. Middle Insert");
			printf("\n\n\t\t4. First Delete");
			printf("\n\n\t\t5. Last Delete");
			printf("\n\n\t\t6. Middle Delete");
			printf("\n\n\t\t7. display");
			printf("\n\n\n\n\t\t8.Exit");
		
			printf("\n\n\tEnter your Choice...");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:	firstinsert();		break;
				case 2: lastinsert();		break;
				case 3: middleinsert();		break;
				case 4: firstdelete();		break ;
				case 5:	lastdelete();		break;
				case 6:	middledelete();		break;
				case 7: disp();				break;
				case 8: exit(0);
			}
		} 
		return 0;
	}
