#include<stdio.h>

int main()
{
    int num, rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    //1234321 
    int place=0;
    while (num/place>=1)
    {
        num=num/10;
        
    }
    printf("%d\n",place);
    
    

    
}