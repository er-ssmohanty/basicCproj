#include<stdio.h>
#include<math.h>
#include<string.h>
int digitcount(int num){
    int a=log10(num)+1;
    return a;
}
void oddhandle(int num, int digcount){
    int oldigits[digcount];
    int digits[digcount-1];
    int left[digcount/2];
    int right[digcount/2];
    int res=1,test=0;
    
    for (int i = 0; i <= digcount; i++)
    {//digit string
        oldigits[i]=num%10;
        num=num/10;
    }

    for (int i = 0; i <= digcount; i++)
    {
        if (i<digcount/2)
        {
            digits[i]=oldigits[i];    
        }
        else if (i==digcount/2)
        {
            continue;
        }
        else
        {
            digits[i-1]=oldigits[i];
        }   
    }
    
    for (int i = digcount/2-1; i >= 0; i--)
    {
        right[i]=digits[digcount/2-i-1];
    }
        
    for (int i = 0; i < digcount/2; i++)
    {
        left[i]=digits[i+digcount/2];
    }

    
    for (int i = 0; i < digcount/2; i++)
    {
            if (left[i]==right[i])
            {
                res=res*1;
                //test=test+1;
            }
            else
            {
                res=res*0;
            }
            
            
    }
    
    if (res==1)
    {
        printf("...\nIt is a palindrome number.\n");
    }
    else
    {
        printf("!!!\nIt not is a palindrome number.\n");
    }
    
}
void evenhandle(int num, int digcount){
    int digits[digcount];
    int left[digcount/2];
    int right[digcount/2];
    int res=1,test=0;
    
    for (int i = 0; i < digcount; i++)
    {//digit string
        digits[i]=num%10;
        num=num/10;
    }


    for (int i = digcount/2-1; i >= 0; i--)
    {
        right[i]=digits[digcount/2-i-1];
    }
        
    for (int i = 0; i < digcount/2; i++)
    {
        left[i]=digits[i+digcount/2];
    }

    
    for (int i = 0; i < digcount/2; i++)
    {
            if (left[i]==right[i])
            {
                res=res*1;
                //test=test+1;
            }
            else
            {
                res=res*0;
            }
            
            
    }
    
    if (res==1)
    {
        printf("...\nIt is a palindrome number.\n");
    }
    else
    {
        printf("!!!\nIt not is a palindrome number.\n");
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