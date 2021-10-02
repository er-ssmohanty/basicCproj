/*Work
    On
    Progress*/
#include<stdio.h>
#include<math.h>
char hexa(int decnum){
    if (decnum==15)
    {
        return 'F';
    }
    else if (decnum==14)
    {
        return 'E';
    }
    else if (decnum==13)
    {
        return 'D';
    }
    else if (decnum==12)
    {
        return 'C';
    }
    else if (decnum==11)
    {
        return 'B';
    }
    else if (decnum==10)
    {
        return 'A';
    }
    else
    {
        return decnum;
    }
}
int main(){
    int decnum;
    printf("Enter a decimal(base 10) integer: ");
    scanf("%d",&decnum);
    int hexdigs = (log10(decnum)/log10(16))+1;
    char hexnum[hexdigs];
    for (int i = hexdigs-1; i >= 0 ; i--)
    {
        hexnum[hexdigs]=decnum%16;
        
        decnum=decnum/16;
    }
    for (int i = hexdigs-1; i >= 0; i--)
    {
        printf("%c",hexnum[i]);
    }
    

    printf("\n");
}