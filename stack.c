//write a c program to insert and delete an element in an array in such a way the element should be inserted and deleted at the same index
#include<stdio.h>
#define max 10
int top=-1;
int a[max];
void push();
void pop();
void display();
void main()
{
int ch=0;

do
{
printf(" enter 1 for insertion");
printf("enter 2 for deletion");
printf("enter 3 for display");
scanf("%d",&ch);

switch(ch)
{
case 1:
push();
break;

case 2:
pop();
break;

case 3:
display();
break;

default:
printf("invalid");
}
}
while(ch<=3);

}
void push()
{
	int x;
	if(top==max-1)
	{
		printf("overflow");
	}
	else
	{
	printf("enter value of x");
	scanf("%d",&x);
	top++;
	a[top]=x;
	}
}
void pop()
{
if(top==-1)
{
printf("underflow");
}
else{
top--;
}
}
void display()
{
int i;
if(top==-1)
{
printf("underflow");
}
else
{
for(i=0;i<=top;i++)
{
printf("%d",a[i]);
}
}
}
	  
