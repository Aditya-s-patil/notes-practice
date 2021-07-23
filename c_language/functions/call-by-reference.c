#include<stdio.h>
void swaip(int, int);
int main(){
    int a=10;
    int b=20;
    printf("before swapping the value in main a=%d, b=%d\n",a,b);
    swap(a,b);
    printf("after swapping value a=%d, b=%d",a,b);

}
void swap (int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping value in function a=%d, b=%d\n",a,b);
}