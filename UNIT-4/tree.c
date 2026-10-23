#include<stdio.h>


 main()
{
    int tree[3]={60,30,40},i;

    for(i=0;i<7;i++)
    {
         printf("Root: %d\n", tree[i]);
         if(2*i + 1<3){
         printf("Left: %d\n",tree[2*i + 1]);}//small}

         if(2*i + 2<3){
        printf("right: %d\n",tree[2*i + 2]);//big
         }
         printf("\n");
    }
    return 0;
}
