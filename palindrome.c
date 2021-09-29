#include<stdio.h>
int main(){
    int num, rev = 0, tmp;
    printf("Enter a number: ");    
    scanf("%d", &num); 
    tmp = num;
    while (num != 0){
        rev = rev * 10;
        rev = rev + num % 10;
        num = num / 10;
    }
    if(tmp == rev){
        printf("%d is palindrome.\n",num);
    }
    else{
        printf("%d is not palindrome.\n",num);
    }
    return 0;
}
