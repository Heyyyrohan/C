#include<stdio.h>
#include<conio.h>

void main()
{    int j,n,l,k,i;
    printf("Enter a Number: ");
    scanf("%d",&n);
        
        for(i=1;i<=n;i++)
            {
            for(j=n;j>=i;j--)
                {
                    printf("  ");
                }
                
                  for(k=1;k<=n;k++)
                    {
                        printf("* ");
                    }
                    
                printf("\n");
            }
    
    
    getch();
}