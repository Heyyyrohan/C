#include<stdio.h>
#include<conio.h>

void main()
{    int j,n,i;
    printf("Enter a Number: ");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
            {    for(j=1;j<=10;j++)
                        {printf("%d %d %d\n",i,j,i*j);
                        }
                        printf("\n");
            }
    getch();
}