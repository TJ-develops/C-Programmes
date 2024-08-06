#include<stdio.h>
int main(){
    int x,c, sum=0;
    printf("Enter Number of Integers u want the sum of");
    scanf("%d", &x);
    for ( c = 1; c <= x;++c){
        sum+=c;
    }
    printf("Sum of n Numbers = %d", sum);

}