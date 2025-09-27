#include<stdio.h>
#define max_size 5
int s[max_size],top=-1;

void push(int item)
{
	if(top>=max_size)
	{
		printf("stack is full");
		return;
	}
	else
	{
		top=top+1;
		s[top]=item;
	}
}

void pop()
{
	if(top<=-1)
	{
		printf("stack is empty");
		return;
	}
	else
	{
		printf("poped element is %d",s[top]);
		top=top-1;
	}
}

void display()
{
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    for (int i = 0; i <= top; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
}


int main()
{
	int s[max_size],item,i;
	for(i=1;i<=max_size;i++)
	{
		printf("enter the item:");
		scanf("%d",&item);
		push(item);
		
	}
		
		pop();
		printf("\nArray after push and pop\n");
		display();
		

	return 0;
}
