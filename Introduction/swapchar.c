#include<stdio.h>
int main(){
    char first,second,d;
    printf("Enter Charachter");
    scanf("%c",&first);
    getchar();
    printf("Enter another Charachter");
    scanf("%c", &second);
   d=first;
   first=second;
   second=d;
printf("After swapping, first  = %c\n", first);
printf("After swapping, second = %c\n", second);
}