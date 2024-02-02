#include<stdio.h>
#include<conio.h>

void main()
{    int n,i,x=1,fact;
printf("Enter a number : ");
scanf("%d",&n);
    for(i=1;i<n;i++)
        {
        x=x*(n-i);
        }
        fact=x*n;
    printf("The factorial is %d",fact);
    getch();
}