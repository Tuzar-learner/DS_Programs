#include<stdio.h>
int t=0,s=0,arr[10];
void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1;
    int r = 2 * i + 2; 
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r]>arr[largest])
        largest = r;
    if (largest!=i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
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
	heapSort(arr, n);
	printf("Sorted array (Heap Sort): \n");
	Display(arr, n);
	return 0;
}
