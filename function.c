#include<stdio.h>

int add(int x,int y)
{
	int result;
	result=x+y;
	return(result);
}

int main()
{
	int x,y,result;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("Enter the number:");
	scanf("%d",&y);
	result=add(x,y);
	printf("result of addition= %d\n",result);
	
	return 0;
}

