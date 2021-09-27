#include<stdio.h>
#include<math.h>
int main(){
    int num,no_of_factors=0;
    printf("Enter a number: ");
    scanf("%d",&num);
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
    printf("%d\n",no_of_factors);
    return 0;
    //return no_of_factors;
}