#include<stdio.h>
struct sparse
{
	int row,column,value;
}s[30];
int sparse_mat(int m[][20],int row,int col)
{
	int i,j,k=0;
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
		if(m[i][j]!=0)
		{
			s[k].row=i;
			s[k].column=j;
			s[k].value=m[i][j];
			k++;
		}
printf("\n");
printf("\tRow(%d)\tColumn(%d)  Value",row,col);
for(i=0;i<k;i++)
	printf("\n\t   %d\t   %d\t     %d",s[i].row,s[i].column,s[i].value);
}
int main()
{
int mat[20][20],i,j,c,r;
printf("Enter the size of the 2D matrix\n");
printf("Rows:");
scanf("%d",&r);
printf("Columns:");
scanf("%d",&c);
printf("Enter the elements of the matrix:\n");
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&mat[i][j]);
printf("\nThe Matrix is:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
		printf(" %d",mat[i][j]);
	printf("\n");
}
sparse_mat(mat,r,c);
printf("\n");
}
