#include<stdio.h>
#include<conio.h>

void main()
{   int j,n,i,k;
    printf("Enter a Number: ");
    scanf("%d",&n);
        i=0;
        j=1;
        k=0;
    while(k<=n)
    {  
         printf("%d\n",k);
         i=j;
         j=k;
         k=i+j;
    }
    getch();
}