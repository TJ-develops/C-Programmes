#include<stdio.h>
int main(){
    int first,second;
    printf("Enter a Number");
    scanf("%d",&first);
    printf("Enter another number");
    scanf("%d", &second);
    first=first-second;
    second=first+second;
    first=second-first;
printf("After swapping, first  = %d\n", first);
printf("After swapping, second = %d\n", second);
}