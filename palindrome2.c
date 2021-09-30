#include<stdio.h>
#include<math.h>
int digitcount(int num){
    int a=log10(num)+1;
    return a;
}
int main(){
    int num,digcount,res=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    digcount = digitcount(num);
    int digits[digcount],oldnum=num;
    for (int i = 0; i < digcount; i++){
        digits[i]=num%10;
        num=num/10;
    }
    for (int i = 0; i < digcount/2; i++){
        if (digits[i]==digits[digcount-i-1]){
            res=res*1;
        }
        else
        {
            res=res*0;
        }
    }
    if (res==1){
        printf("...\n%d is a palindrome number.\n",oldnum);                
    }
    else{
        printf("!!!\n%d is not a palindrome number.\n",oldnum);
    }       
   return 0;
}