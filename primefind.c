#include<stdio.h>
int factors(int num){
    int no_of_factors=0;
    //printf("Enter a number: ");
    //scanf("%d",&num);
    if (num<=0)
    {
        printf("Only natural numbers are expected.");
        return 1;
    }
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            no_of_factors++;
        }
        
    }
    //printf("%d\n",no_of_factors);
    //return 0;
    return no_of_factors;
}
int main(){
    int low, high;
    printf("Enter the lower limit: ");
    scanf("%d",&low);
    printf("Enter the higher limit: ");
    scanf("%d",&high);
    for (int i = low; i <= high; i++)
    {
        if (factors(i)==2)
        {
            printf("%d is a prime number.\n",i);
        }
        
    }
    return 0;
}