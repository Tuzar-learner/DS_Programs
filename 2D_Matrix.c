#include<stdio.h>
int main()
{
int a[50][50],i,j,m,n;
printf("Enter the number of rows and columns of the matrix\n");
printf("Rows:");
scanf("%d",&m);
printf("Columns:");
scanf("%d",&n);
printf("\nEnter the elements of the matrix:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}	
}
printf("\nThe Matrix is:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d",a[i][j]);
	}
	printf("\n");	
}
}
