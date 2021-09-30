#include<stdio.h>
#include<math.h>
int main(){
    double decnum;
    printf("Enter a decimal(base 10) integer: ");
    scanf("%lf",&decnum);
    int no_of_bits = log2(decnum)+1;
    int binum[no_of_bits]; int oldec= decnum; 
    for (int i = no_of_bits-1; i >= 0; i--){
        if (decnum>=pow(2,i)){
            binum[i]=1;
            decnum=decnum-pow(2,i);
        }
        else{
            binum[i]=0;
        }
    }
    printf("Binary form of %d is ",oldec);
    for (int i = no_of_bits-1; i >= 0; i--){
        printf("%d",binum[i]);
    }
    printf("\n");
}