#include<stdio.h>
#include<stdlib.h>
struct Node {
    int coeff;
    int pow;
    struct Node* next;
};
void create(int x, int y, struct Node **temp) 
{ 
    struct Node *p1, *p2; 
    p2 = *temp; 
    if(p2 == NULL) 
    { 
        p1 =(struct Node*)malloc(sizeof(struct Node)); 
        p1->coeff = x; 
        p1->pow = y; 
        *temp = p1; 
        p1->next = (struct Node*)malloc(sizeof(struct Node)); 
        p1= p1->next; 
        p1->next = NULL; 
    } 
    else
    { 
        p1->coeff = x;
	p1->pow = y; 
	p1->next = (struct Node*)malloc(sizeof(struct Node)); 
	p1=p1->next; 
	p1->next = NULL; 
    } 
}
void Add(struct Node *poly1, struct Node *poly2, struct Node *poly) 
{ 
while(poly1->next && poly2->next) 
    { 
        if(poly1->pow > poly2->pow) 
        { 
            poly->pow = poly1->pow; 
            poly->coeff = poly1->coeff; 
            poly1 = poly1->next; 
        }   
        else if(poly1->pow < poly2->pow) 
        { 
            poly->pow = poly2->pow; 
            poly->coeff = poly2->coeff; 
            poly2 = poly2->next; 
        } 
        else
        { 
            poly->pow = poly1->pow; 
            poly->coeff = poly1->coeff+poly2->coeff; 
            poly1 = poly1->next; 
            poly2 = poly2->next; 
        }    
        poly->next = (struct Node *)malloc(sizeof(struct Node)); 
        poly = poly->next; 
        poly->next = NULL; 
    }    
while(poly1->next || poly2->next) 
    { 
        if(poly1->next) 
        { 
            poly->pow = poly1->pow; 
            poly->coeff = poly1->coeff; 
            poly1 = poly1->next; 
        } 
        if(poly2->next) 
        { 
            poly->pow = poly2->pow; 
            poly->coeff = poly2->coeff; 
            poly2 = poly2->next; 
        } 
        poly->next = (struct Node *)malloc(sizeof(struct Node)); 
        poly = poly->next; 
        poly->next = NULL; 
    } 
} 
void show(struct Node *node) 
{ 
while(node->next != NULL) 
    { 
    printf("%dx^%d", node->coeff, node->pow); 
    node = node->next; 
    if(node->next != NULL) 
        printf(" + "); 
    } 
}  
int main() 
{ 
   struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
   int ch,coeff,pow,t1,t2;
      while(1)
      {
         printf("\n1.Read the polynomials\n2.Display polynomials \n2.Add\n3.Display the sum\n4.Exit");
	 printf("\nEnter your choice: ");
	 scanf("%d",&ch);
         switch(ch)
         {   
	    case 1:
	       printf("Enter the number of terms of 1st polynomial: ");
	       scanf("%d",&t1);
	       for(int i=0;i<t1;i++)
	       {
		printf("Enter the coefficient and exponent of the term %d\n",i+1);
		scanf("%d %d",&coeff,&pow);
                create(coeff,pow,&poly1); 
               }
	       printf("Enter the number of terms of 2nd polynomial: ");
	       scanf("%d",&t2);
	       for(int i=0;i<t2;i++)
	       {
		printf("Enter the coefficient and exponent of the term %d\n",i+1);
		scanf("%d %d",&coeff,&pow);
                create(coeff,pow,&poly2); 
               } 
	       break;
	    case 2:
               printf("1st Polynomial: ");  
               show(poly1); 
               printf("\n2nd Polynomial: "); 
               show(poly2);     
	       break;
            case 3:
               poly = (struct Node *)malloc(sizeof(struct Node));      
               Add(poly1, poly2, poly);    
               printf("\nSum of the polynomials: "); 
               show(poly); 
	       break;
            case 4:
		printf("\nProgram is ended\n");
		exit(0);
		break;
	    default:
		printf("\nWrong Choice!!! Try Again\n");
         }  
      }
return 0; 
}  
