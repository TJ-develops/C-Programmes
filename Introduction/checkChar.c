#include<stdio.h>
int main(){
    char x;
    printf("Enter a Charachter");
    scanf("%c", &x);
    if((x>='a' && x<='z') || (x>='A' && x<='Z'))
    printf("%c is an Alphabet.", x);
    else
    printf("%c is not an Alphabet.", x);
}