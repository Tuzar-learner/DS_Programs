#include<stdio.h>
int bin_search(int a[],int s,int x)
{
int first=0,last=s,mid;
mid=(first+last)/2;
while(first<=last)
{
	if(a[mid]<x)
	{
		first=mid+1;
	}
	else if(a[mid]==x)
	{
		printf("\n %d is found at the location "
			"\'%d\'\n\n",x,mid+1);
		break;
	}
	else
	{
		last=mid-1;
	}
	mid=(first+last)/2;
}
if(first>last)
	printf("\n Element not found\n\n");
}
int main()
{
	int i,array[50],size,search;
	char fb;
	printf("\n Enter the size of the array: ");
	scanf("%d",&size);
	printf(" Enter the elements of the array:\n");
	for(i=0;i<size;i++)
		scanf(" %d",&array[i]);
	do
	{
		printf(" Enter the element to be searched:");
		scanf("%d",&search);
		bin_search(array,size,search);
		printf(" Do you want to continue(y/n): ");
		scanf(" %c",&fb);
	}while(fb=='y'||fb=='Y');
}

