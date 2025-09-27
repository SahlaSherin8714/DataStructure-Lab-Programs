#include<stdio.h>

void display_arr(int arr[],int size)
{
	printf("array elements are:");
	for(int i=1;i<=size;i++)
	{
		printf("%d",arr[i]);
		}
}

int sort_arr(int arr[],int size)
{
	int i,j,temp;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
			}
		}
}

void merge_arr(int arr1[],int arr2[],int arr3[],int size1,int size2)
{
	int i;
	for(i=0;i<size1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(int j=0;j<size2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
}
	
int main()
{
	int size1,size2,size3,i,j,n,temp;
	int arr1[10],arr2[10],arr3[10];
	printf("enter the size of array1:");
	scanf("%d",&size1);
	for(i=1;i<=size1;i++)
	{
		printf("enter the %d element",i);
		scanf("%d",&arr1[i]);	
	}
		
	printf("enter the size of array2:");
	scanf("%d",&size2);
	for(j=1;j<=size2;j++)
	{
		printf("enter the %d element",j);
		scanf("%d",&arr2[j]);	
	}
	printf("\nSorted Array1");
	sort_arr(arr1,size1);
	display_arr(arr1,size1);
	
	printf("\nSorted Array2");
	sort_arr(arr2,size2);
	display_arr(arr2,size2);
	
	printf("\nMerged Array");
	merge_arr(arr1,arr2,arr3,size1,size2);
	sort_arr(arr3,size1+size2);
	display_arr(arr3,size1+size2);
	
	
	

return 0;
}
	
	
	
