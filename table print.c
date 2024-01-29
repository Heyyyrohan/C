#include<stdio.h>
#include<conio.h>
void main()
{ 
   int i;
   int x;
          printf("Enter a number which table you want to print");
          scanf("%d",&x);

       for( i=1;i<=10;i++)
           printf("%d %d %d\n",x,i,i*x);
    
}