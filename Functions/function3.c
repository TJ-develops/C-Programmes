#include<stdio.h>
void Calculatorprice(float value);
int main(){
    float value;
    printf("Enter the amount:");
    scanf("%f", &value);
    Calculatorprice(value);
}

void Calculatorprice(float value){
    value=value + (0.18*value);
    printf("Final Price after GST is : %f\n",  value);
}