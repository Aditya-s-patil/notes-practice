#include<stdio.h>
int main(){
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    if(number%2==0){
        printf("the number %d is even",number);

    }
    return 0;
}