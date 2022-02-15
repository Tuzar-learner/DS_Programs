#include<stdio.h>
int t=0,s=0,arr[10];
void swap(int *x, int *y)
{
	t++;
	int temp=*x;
	t++;
	*x=*y;
	t++;
	*y=temp;
	t++;
}
void bubbleSort(int arr[], int n)
{
	int i,j;
	for (i=0;i<n-1;i++) 
	{     
		for (j=0;j<n-i-1;j++)
		{ 
			if (arr[j]>arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}
	}
}
void Display(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int n;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr, n);
	printf("Sorted array (Bubble Sort): \n");
	Display(arr, n);
	return 0;
}
