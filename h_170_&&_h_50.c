#include<stdio.h>

int main()
{
    int h,w,count=0;
    int i=1;
    
    while(i<=5)
        {
            printf("Enter height and weight of person %d : ",i);
            scanf("%d%d",&h,&w);
            i++;
    
             if(h>170 && w<50)
                 { count=count+1;
                 }
        }
        printf("%d",count);
    return 0;
}