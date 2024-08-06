#include<stdio.h>
int main (){
    int n, count;
    printf("Enter a Integer");
    scanf("%d",&n);
    do{
        n=n/10;
        ++count;
    }
    while(n !=0);
    printf("Number of digits are %d", count);
}