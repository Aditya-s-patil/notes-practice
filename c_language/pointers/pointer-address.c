#include<stdio.h>
int main(){
    int first_array[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr = first_array;
    for (int i=0;i<10;i++){
        printf("value of *ptr variable= %d\n",*ptr);
        printf("value of ptr variable= %d\n",ptr);
        ptr++;
    }
}