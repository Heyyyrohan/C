#include<stdio.h>
#include<conio.h>

void main()
{    int j,n,i;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {for(j=1;j<=i;j++)
            {   if((i+j)%2==0) 
               { printf("1 ");
               }
               else
               {printf("0 ");
               }
            }
                printf("\n");
        }
    getch();
}