#include<stdio.h>
// Function to compute the nth Fibonacci number
int fibo(int n);
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    // print the nth Fibonacci number
    printf("Fibonacci is %d\n", fibo(n));
}
// Recursively computes the nth Fibonacci number
int fibo(int n){
    if(n == 0){
        return 0; 
    }
    if (n == 1){
        return 1; 
    }
    int fibonm1 = fibo(n-1); 
    int fibonm2 = fibo(n-2); 
    int fibon = fibonm1 + fibonm2; 
    return fibon;
}
                             