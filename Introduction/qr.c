#include<stdio.h>
int main(){
    int dividend,divisor,quotient,remainder;
    printf("Enter your Dividend");
    scanf("%d", &dividend);
    printf("Enter the Divisor");
    scanf("%d", &divisor);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    printf("Quotient=%d/n", quotient);
    printf("Remainder=%d", remainder);
}