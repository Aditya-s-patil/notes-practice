#include<stdio.h>
int main()
{
    int num1, num2, max;
    printf("enter num1 & num2");
    scanf("%d%d",&num1,&num2);
    max=(num1>num2)?num1:num2;
    printf("%d\n",max);
    printf("is the largest number of given numbers");
    return 0;

}