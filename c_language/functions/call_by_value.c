#include<stdio.h>
void change(int numm){
    printf("before adding inside function numm=%d\n",numm);
    numm=numm+100;
    printf("after adding value inside function numm=%d\n",numm);
} 
int main(){
    int num=100;
    printf("before function call num=%d\n",num);
    change(num);
    printf("after function call num=%d\n",num);
    return 0;
}

