#include<stdio.h>
float convertemp(float celcius);
int main (){
    float Celcius;
    printf("Enter Temperatur in Celcius:");
    scanf("%f", & Celcius);

 float Farenheit = convertemp(Celcius);
 printf("Farenheit : %f\n", Farenheit);
}
float convertemp(float celcius){
    float Farenheit = celcius *(9/5) + 32;
    return Farenheit;
}