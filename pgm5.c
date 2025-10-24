#include <stdio.h>
#define max_size 5

int q[max_size];
int front = -1, rear = -1;

void enqueue(int item)
{
    if ((rear + 1) % max_size == front)
    {
        printf("Queue is full\n");
        return;
    }
    else
    {
        if (front == -1) 
            front = 0;
        rear = (rear + 1) % max_size;
        q[rear] = item;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        int item = q[front];
        if (front == rear) 
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % max_size;
        }
        printf("Deleted element is %d\n", item);
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    printf("%d ", q[i]);
    if (i == rear)
        break;
    i = (i + 1) % max_size;
    
    printf("\n");
}

int main()
{
	do
	{
		int choice,s[max_size],item,i;
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the element to push: ");
			       scanf("%d",&item);
			       enqueue(item);
			       break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:return 0;
			default:printf("enter the correct choice ");
				break;	
		}
	}while(1);		

	
return 0;
}
