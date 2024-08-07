#include<stdio.h>
int fact (int n);
int main (){
printf("Factorial is : %d\n", fact(5));
}
int fact(int n){
    if (n == 1){
        return 1;
    }
    int factNM1= fact(n-1);
    int factN= factNM1 * n;
    return factN;
}