#include <stdio.h>
int lin_search(int arr[],int size)
{
	int x,flag=0;
	printf("\nEnter the element to be searched: ");
	scanf("%d",&x);
	for(int i=0;i<size;i++)
	{
		if(arr[i]==x)
		{
			printf("\nElement found in the array at index '%d'\n\n",i+1);
			flag=1;	
		}	
	}
	if(flag==0)
		printf("\nElement not found in the array\n\n");
}
int main()
{
	int array[30],size,ans;
	do
	{
	printf("\n\nEnter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the elements of the array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
		lin_search(array,size);
		printf("   Enter '1' to stop: ");
		scanf("%d",&ans);
	}while(ans!=1);
}
