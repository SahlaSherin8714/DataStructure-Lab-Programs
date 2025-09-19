#include<stdio.h>
int main()
{
		int n,prd=0;
		printf("enter a number:");
		scanf("%d",&n);
		for(int i=1;i<=10;i++)
		{
			prd=i*n;
			printf("%d X %d = %d\n",i,n,prd);
		}
		
	return 0;
}

