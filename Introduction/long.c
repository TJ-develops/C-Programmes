#include<stdio.h>
int main(){
    int a;
    long b;
    long long c;
    double d;
    long double e;
    printf("size of int = %zu bytes\n", sizeof(a));
    printf("size of long = %zu bytes\n", sizeof(b));
    printf("size of long long = %zu bytes\n", sizeof(c));
    printf("size of double = %zu bytes\n", sizeof(d));
    printf("size of long double = %zu bytes\n", sizeof(e));
}