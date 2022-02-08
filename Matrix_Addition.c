#include<stdio.h>
int main()
{
int a[50][50],b[50][50],c[50][50],i,j,m,n;
printf("Enter the number of rows and columns of the matrices\n");
printf("Rows:");
scanf("%d",&m);
printf("Columns:");
scanf("%d",&n);
printf("\nEnter the elements of the matrix A:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}	
}
printf("\nEnter the elements of the matrix B:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[i][j]);
	}	
}
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("\n");	
}
printf("The Sum of the two matrices is:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d",c[i][j]);
	}
	printf("\n");	
}
}
