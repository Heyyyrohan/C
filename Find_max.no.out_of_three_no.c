#include<stdio.h>

int main()
{
   int a,b,c;
    printf("Enter 3 number a,b and c : ");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b)
    { if(a>c)
        { printf(" a is greater");
        }
    }
    
    if(b>a)
    { if(b>c)
        { printf(" b is greater");
        }
        else
        { printf(" c is greater");
        }
    }
    return 0;
}