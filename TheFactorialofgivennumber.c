#include<stdio.h>
#include<conio.h>

void main()
{    int n,i,fact=1;
printf("Enter a number : ");
scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        fact=fact*i;
        }
    printf("The factorial is %d",fact);
    getch();
}