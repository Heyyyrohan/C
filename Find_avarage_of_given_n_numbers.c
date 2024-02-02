#include<stdio.h>

int main()
{    int i,num,avrg,sum=0,n,m=0;
            printf("Enter How many numbers you want enter to find avarage");
            scanf("%d",&n);
    for(i=1;i<=n;i++)
        {printf("enter a number %d \n",i);
        scanf("%d",&num);
        sum=sum+num;
        
        if(num>0 || num <0)
          {  m=m+1;
          }
        }
        avrg=sum/m;
            printf("The Average of given numbers is %d\n",avrg);
            
            return 0;
}