//program :1 create  an array of size10,input values, print the array, and search an element

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,search,found=0;
//clrscr();
printf("enter 10 elements:\n");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
printf("\narray elements are:\n");
for(i=0;i<10;i++){
printf("%d",&a[i]);
}
printf("\n\nenter element to search:");
scanf("%d",&search);
for(i=0;i<10;i++){
if(a[i] == search){
found = 1;
printf("element found at position %d", i+1);
break;
}
}
if(found == 0)
printf("element not found.");

getch();
}
