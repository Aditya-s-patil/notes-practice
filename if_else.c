#include<stdio.h>
int main(){
    int number;
    printf("enter a number");
    scanf("%d",&number);
    if (number%2==0){
        printf("number %d is even",number);
    }
    else{
        printf("number %d is odd",number);

    }
    return 0;
}