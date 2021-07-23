#include<stdio.h>
int main()
{
    char operator;
    int num1, num2;
    printf("enter an operator (+, -, *, /):\n");
    scanf("%c",&operator);
    printf("enter num1 & num2 ");
    scanf("%d %d",&num1,&num2);
    switch(operator)
    {
        case'+':
            printf("%d + %d = %d",num1,num2,num1+num2);
            break;
        case'-':
           printf("%d - %d = %d",num1,num2,num1-num2);
           break;
        case'*':
           printf("%d * %d = %d",num1,num2,num1*num2);   
           break;
        case'/':
           printf("%.1lf / %.1lf = %.1lf",num1,num2,num1/num2);   
           break;
        default:
           printf("Error operator is not correct");   
    }
    return 0;
}