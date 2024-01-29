#include<stdio.h>

int main()
{
    int n,x=0;
    printf("Enter a number for count digit : \n");
    scanf("%d",&n);
    
    while(n>0)
        { 
          n=n/10;
          ++x;
         }
         printf("\n %d",x);
    return 0;
}