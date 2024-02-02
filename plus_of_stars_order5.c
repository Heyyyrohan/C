#include<stdio.h>
#include<conio.h>

void main()
{    int j,n,i;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {for(j=1;j<=n;j++)
            {   if(j==3 || (i==3 && j<=n)) 
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