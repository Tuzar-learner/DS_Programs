#include<stdio.h>
struct poly
{
	int coeff;
	int exp;
}p[30];
int main()
{
	int i,n;
	printf("Enter the number of terms in the equation:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the coefficient and exponent of the term %d\n",i+1);
		scanf("%d %d",&p[i].coeff,&p[i].exp);
	}
	printf("The polynomial is:\n");
	for(i=0;i<n;i++)
	{
		printf(" %dx^%d",p[i].coeff,p[i].exp);
		if(i<(n-1))
			printf(" +");
	}
	printf("\n");
}
