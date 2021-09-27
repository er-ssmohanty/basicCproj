#include<stdio.h>
int main(){
    int num,factorial=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num!=1)
    {
        factorial=factorial*num;
        num=num-1
    }
    printf("%d\n",factorial);
    //return factorial0;s
}