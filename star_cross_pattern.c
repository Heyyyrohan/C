#include<stdio.h>
#include<conio.h>

void main()
{    int j,n,i;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {for(j=1;j<=n;j++)
            {   if((i==j || (i+j)==n+1)) 
               { printf("*");
               }
               else
               {printf(" ");
               }
            }
                printf("\n");
        }
    getch();
}