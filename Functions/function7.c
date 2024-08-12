#include<stdio.h>
int fibo(int n);
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d", & n);
printf("Fibbonaci is %d\n", fibo(n));
}
int fibo(int n){
    if(n == 0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fibonm1 = fibo(n-1);
    int fibonm2 = fibo(n-2);
    int fibon = fibonm1 + fibonm2;
    
    return fibon;
}                                        