#include<stdio.h>
int main(){
    int num,factorial0=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num!=1)
    {
        factorial0=factorial0*num;
        num=num-1;
        /* code */
    }
    printf("%d\n",factorial0);
    //return factorial0;s
}