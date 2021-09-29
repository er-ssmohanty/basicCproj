#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    
    if (year%4!=0)
    {
        printf("Normal Year\n");
    }
    else if (year%4==0 && year%100!=0)
    {
        printf("Leap year\n");
    }
    else if (year%100==0 && year%400!=0)
    {
        printf("Normal Year\n");
    }
    else
    {
        printf("Leap Year\n");
    }
    
}