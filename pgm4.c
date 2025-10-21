#include<stdio.h>
#define max_size 5

int q[max_size-1];   
int front = -1, rear = -1;  

void enqueue(int item)
{
    if(rear == max_size - 1)  
    {
        printf("Queue is full\n");
        return;
    }
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        q[rear] = item;
    }
    else
    {
        rear = rear + 1;
        q[rear] = item;
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Dequeued element is %d\n", q[front]);
        front = front + 1;
    }
    if(front > rear)
        front = rear = -1;
}

void display()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    for(int i = front; i <= rear; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}

int main()
{
    int choice, item;
    do
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("enter the element to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("enter the correct choice\n");
                break;
        }
    }while(1);

    return 0;
}

