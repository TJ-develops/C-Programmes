#include<stdio.h>

int percent(int phy, int chem, int math);

int main(){
    printf("Enter your Grades Below\n");

    int phy;
    printf("Physics:");
    scanf("%d", &phy);

    int chem;
    printf("Chemistry:");
    scanf("%d", &chem);

    int math;
    printf("Mathematics:");
    scanf("%d", &math);

printf("Your Percentage is: %d\n", percent( phy, chem, math));
}
int percent(int phy, int chem, int math){

    return (( phy + chem + math)/3);
}