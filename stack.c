#include<stdio.h>
#include<stdlib.h>
int stack[20], top = -1;
void push(int value){
   if(top == 20-1)
      printf("\nStack is Full");
   else{
      top++;
      stack[top] = value;
      printf("\n%d is inserted sucessfully",value);
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty");
   else{
      printf("\n%d is deleted", stack[top]);
      top--;
   }
}

void main()
{
	int value, choice;
	while(1)
	{
		printf("\n\n1. Push\n2. Pop\n3. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the value to be insert: ");
			scanf("%d",&value);
			push(value);
			printf("\n\nStack elements are:\n");
			for(int i=top; i>=0; i--)
			printf("%d\n",stack[i]);
			break;
			case 2: pop();
			printf("\n\nStack elements are:\n");
			for(int i=top; i>=0; i--)
			printf("%d\n",stack[i]);
			break;
			case 3: exit(0);
			default: printf("\nWrong choice! Try again");
		}
	}
}
