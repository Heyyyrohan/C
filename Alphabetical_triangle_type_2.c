#include<stdio.h>
#include<conio.h>

void main()
{    int j,n,i;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {for(j=1;j<=i;j++)
            {    printf("%c ",j+64);
                // printf("* ");
            }
                printf("\n");
        }
    getch();
}