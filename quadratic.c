#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,del,alpha,beta;
    printf("Enter 'a' or the coefficient of x^2: ");
    scanf("%lf",&a);
    printf("Enter 'b' or the coefficient of x: ");
    scanf("%lf",&b);
    printf("Enter 'c' or the constant value: ");
    scanf("%lf",&c);
    if ((b*b)-(4*a*c) < 0)
    {
        printf("No real solutions!\n");
        return 1;
    }
    else
    {
        printf("Alpha = %lf and Beta = %lf\n",(-b+sqrt((b*b)-(4*a*c)))/(2*a),(-b-sqrt((b*b)-(4*a*c)))/(2*a));
        return 0;
    }
}