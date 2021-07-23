#include <stdio.h>
int main()
{
    int i=0;
    int empid[4];
    empid[0]=123;
    empid[1]=124;
    empid[2]=125;
    empid[3]=126;
    for (i=0;i<4;i++)
    {
        printf("%d\n",empid[i]);
    }
    return 0;
}