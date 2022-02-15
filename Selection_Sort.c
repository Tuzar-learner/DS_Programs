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
void selectionSort(int arr[], int n)
{
	int i,j,min;
	for (i=0;i<n-1;i++)
	{
		min=i;
		for (j=i+1;j<n; j++)
		{
			if (arr[j]< arr[min])
				min=j;
			swap(&arr[min], &arr[i]);
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
	
	int n,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	selectionSort(arr, n);
	printf("Sorted array (Selection Sort): \n");
	Display(arr, n);
	return 0;
}
