#include<stdio.h>
// Function to compute the factorial of a number
int fact(int n);
int main (){
    // print the factorial of 5
    printf("Factorial is : %d\n", fact(5));
}
// Recursively computes the factorial of n
int fact(int n){
    if (n == 1){
        return 1; 
    }
    int factNM1 = fact(n - 1); // Recursive call: factorial of (n-1)
    int factN = factNM1 * n;
    return factN;
}