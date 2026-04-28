#include<stdio.h>
#include<stdlib.h>
int Queue[100],n,i,front=-1,rear=-1,x,ch;
void insert();
void delet();
void display();int  main()
{
	printf("enter queue size:");
	scanf("%d",&n);
	printf("\nenter queue operation 1.insert 2.delete 3.display 4.exit");
	while(1)
	{
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : insert();
					 break;
			case 2 : delet();
					 break;
			case 3 : display();
					 break;
			case 4 : printf("exit from Queue:");
					exit(0);
			default : printf("Invalid choice");
		}
	}
}
	void insert()
	{
		if(rear==n-1)
		{
			printf("Queue is full");
		}
		else
		{
			rear++;
			printf("enter Queue element");
			scanf("%d",&x);
			Queue[rear]=x;
			printf("element inserted");
		}
	}
	void delet()
	{
		if(front==rear)
		{
			printf("Queue is empty");
		}
		else
		{
			front++;
			printf("deleted data element is =%d",Queue[front]);
		}
	}
	void display()
	{
		if(front==rear)
		{
			printf("Queue is empty");
		}
		else
		{
			printf("Queue elements are:\n");
			for(i=0;i<=rear;i++)
			{
				printf("%d",Queue[i]);
			}
		}
	}
