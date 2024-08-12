#include<stdio.h>
// Function to calculate final price after GST
void Calculatorprice(float value);
int main(){
    float value;
    printf("Enter the amount:");
    scanf("%f", &value);
    Calculatorprice(value);
}
// Calculates and prints the final price after applying 18% GST
void Calculatorprice(float value){
    value = value + (0.18 * value);
    printf("Final Price after GST is : %f\n", value);
}
