#include<stdio.h>
int main()
{
		int n,i,avg,sum=0;
		printf("enter a number:");
		scanf("%d",&n);
		do
		{
			sum=i+sum;
			i+=1;
			avg=sum/n;
		}while(i<=n);
		printf("average of %d numbers is %d\n",n,avg);
	return 0;
}
		

