#include<stdio.h>
int main()
	{
	    int n, i;
	    int sum = 0;
	    int arr[50]; 
	    printf("Enter the number of elements (n): ");
	    scanf("%d", &n);
	    if (n<=50)
	    {
			  for (i = 0;i<n;i++) {
					printf("Enter element %d: ", i + 1);
					scanf("%d", &arr[i]);
						}

			  for (i = 0;i<n;i++) {
					sum += arr[i];
			  }

			  printf("The sum of the %d numbers is: %d\n", n, sum);
	    }
	    else
	    {
	    	printf("%d is greater than 50",n);
	    }
	    return 0;
	}
