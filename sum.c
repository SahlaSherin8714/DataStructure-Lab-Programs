#include<stdio.h>
int main()
{
int sum=0;
int i=0;
while(i<10){
	i+=1;
	sum=i+sum;
	}
printf("sum of first ten numbers is : %d\n",sum);
return 0;
}
