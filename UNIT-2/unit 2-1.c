#include<stdio.h>
#include<conio.h>

#define max 5
int stack[max];
int top = -1;
void push(){
int item;
if(top == max-1)
{
printf("\nstack is full overflow");
}
else{
printf("\nenter the elements");
scanf("%d",&item);

top++;
stack[top] = item;
printf("\n enter element successfully",item);
}
}
void main()
{
push();
push();
push();
getch();
}
