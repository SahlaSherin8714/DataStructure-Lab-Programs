#include<stdio.h>
int main()
	{
	int lrg=0,num;
	int i=1;
	while(i<5)
		{
		printf("enter a number:");
		scanf("%d",&num);
		if (num>lrg)
			{
			lrg=num;
			}
		i+=1;
		}
	printf("largest numbers is %d\n",lrg);
	return 0;
	}
