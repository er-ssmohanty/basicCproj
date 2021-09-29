#include<stdio.h>
#include<math.h>

int digitcount(int num){
    int a=log10(num)+1;
    return a;
}

int main(){
    int num,digcount; //rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    int oldnum = num;
    digcount = digitcount(num);
    
    int digits[digcount];

    for (int i = 0; i < digcount; i++)
    {//digit string
        digits[i]=num%10;
        num=num/10;
    }

    int dig_sqaure_sum=0;

    for (int i = 0; i < digcount; i++)
    {
        dig_sqaure_sum = dig_sqaure_sum + pow(digits[i],digcount);
    }

    if (oldnum==dig_sqaure_sum)
    {
        printf("...\nIt is an armstrong number.\n");
    }    
    else
    {
        printf("!!!\nIt is not an armstrong number.\n");
    }
    
    

}
