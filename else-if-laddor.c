#include<stdio.h>
int main(){
    int number;
    printf("enter a number");
    scanf("%d",&number);
    if(number==10){
        printf("%d is equal to 10",number);
    }
    else if( number==50){
        printf("%d  equal to 50",number);
    }
    else if(number==100){
        printf("%d equal to 100 ",number);
    }
    else{printf("number is greater that 100");}
    return 0;
    }