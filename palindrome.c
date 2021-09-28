#include<stdio.h>
#include<math.h>
int digitcount(int num){
    int a=log10(num)+1;
    return a;
}
void oddhandle(int num, int digcount){
    int digits[digcount];
    for (int i = digcount-1; i >= 0; i--)
    {
        digits[i]=num%10;
        num=num/10;
    }
    
    
}
void evenhandle(int num, int digcount){
    int digits[digcount];
    int left[digcount/2];
    int right[digcount/2];
    for (int i = digcount-1; i >= 0; i--)
    {
        digits[i]=num%10;
        num=num/10;
    }
    for (int i = 0; i < digcount/2; i++)
    {
        right[i]=digits[i];
    }
    for (int i = digcount/2; i < digcount; i++)
    {
        left[i]=digits[i+(digcount/2)];
    }
    
    

}
int main()
{
    int num,digcount; //rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    digcount = digitcount(num);
    if (digcount%2==0)
    {
        evenhandle(num,digcount);
    }
    else
    {
        oddhandle(num,digcount);
    }
    return 0;
}