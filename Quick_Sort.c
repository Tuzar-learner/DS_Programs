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
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i+1);
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void Display(int arr[], int size)
{
	int i;
	for (i=0;i<size;i++)
		printf("%d ",arr[i]);
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
	quickSort(arr, 0, n - 1);
	printf("Sorted array (Quick Sort): \n");
	Display(arr, n);
	return 0;
}
