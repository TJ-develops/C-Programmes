#include<stdio.h>
// Function to convert Celsius to Fahrenheit
float convertemp(float celcius);
int main (){
    float Celcius;
    printf("Enter Temperature in Celsius:"); // Prompt user for input
    scanf("%f", &Celcius);
    float Fahrenheit = convertemp(Celcius); // Convert Celsius to Fahrenheit
    printf("Fahrenheit: %f\n", Fahrenheit); // Display result
}
// Converts Celsius to Fahrenheit
float convertemp(float celcius){
    float Fahrenheit = celcius * (9.0/5.0) + 32; // Use floating-point division
    return Fahrenheit;
}