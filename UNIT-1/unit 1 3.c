//program 3:create array A,B, and c of size 3 and perform c = A + B

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
printf("\nEnter 3 elementd for array B:\n");
for(i=0;i<3;i++){
C[i]=A[i]+B[i];
}
printf("\nArray C(A + B):\n");
for(i=0;i<3;i++)
{
printf("%d",C[i]);
}
getch();
}
