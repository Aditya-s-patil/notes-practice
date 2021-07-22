#include<stdio.h>
int main()
{
    int num1, num2;
    printf("enter first number");
    scanf("%d",&num1);
    printf("enter mun2");
    scanf("%d",&num2);
    if(num1!=num2){
        if(num1>num2){
            printf("num1 is greater than num2");
        }else{printf("num1 is smaller than num2");}
        return 0;
    }
    else{printf("num1 is equal to num2");
    }
    return 0;
}