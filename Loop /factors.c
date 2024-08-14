#include<stdio.h>
int main(){
    int i , fact=1,num;
    printf("Enter a Number");
    scanf("%d",&num);
    for(i=1; i <= num; i++){
        fact=fact*i;
    }
    printf("%d is the facttorial of %d", fact,num);
}