#include <stdio.h>

int main() 
{
    int a,b;
    char op;
    
    printf("Enter First Number ");
    scanf("%d",&a);
    
    printf("Enter Operator ");
    scanf(" %c",&op);
    
    printf("Enter Second Number ");
    scanf("%d",&b);
    
    switch(op)
    {
       case '+':
       printf("Result is : %d",a+b);
       break;
       
       case '-':
       printf(" Result is : %d",a-b);
       break;
       
       case '*':
       printf("Result is : %d",a*b);
       break;
       
       case '/':
       printf("Result is : %d",a/b);
       break;
       
       default:
       printf("Invalid operator");
    } 
    return 0;  
}
    