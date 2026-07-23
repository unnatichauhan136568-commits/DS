//program 4:create array A,B of size 3, C of size 6, and merge A and B into c

#include<stdio.h>
#include<conio.h>
void main()
{
int A[3],B[3],C[3];
int i;
printf("enter 3 elements for array A:\n");
for(i=0;i<3;i++)
{
scanf("%d",&A[i]);
}
printf("\nEnter 3 elements for array B:\n");
for(i=0;i<3;i++){
scanf("%d",&B[i]);
}
for(i=0;i<3;i++){
        C[i]=A[i];
}
for(i=0;i<3;i++){
 C[i+3]=B[i];
 }
printf("\nMerged array C:\n");
for(i=0;i<6;i++){
printf("%d",C[i]);
}
getch();
}
