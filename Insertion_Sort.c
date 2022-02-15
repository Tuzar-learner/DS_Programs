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
void insertionSort(int arr[], int n)
{
    int i,key,j;
    for (i=1;i<n;i++) {
        key = arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] = key;
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
	insertionSort(arr, n);
	printf("Sorted array (Insertion Sort): \n");
	Display(arr, n);
	return 0;
}
