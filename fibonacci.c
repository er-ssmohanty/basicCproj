#include<stdio.h>
int main(){
    int mem=0, uplim,rem=1;
    int num = 0;

    printf("Enter upper limit: ");
    scanf("%d",&uplim);

    while(num < uplim)
    {
        num=mem+rem;
        if (num<uplim)
        {
            printf("%d ",num);
        }
        mem=rem;
        rem=num;
    }
    printf("\n");
}