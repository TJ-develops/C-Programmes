#include<stdio.h>
// Function to calculate percentage from grades
int percent(int phy, int chem, int math);

int main(){
    printf("Enter your Grades Below\n");

    int phy;
    printf("Physics: ");
    scanf("%d", &phy);

    int chem;
    printf("Chemistry: ");
    scanf("%d", &chem);

    int math;
    printf("Mathematics: ");
    scanf("%d", &math);

    // Calculate and print the percentage
    printf("Your Percentage is: %d\n", percent(phy, chem, math));
}
// Returns the average of the three grades
int percent(int phy, int chem, int math){
    return ((phy + chem + math) / 3); // Integer division
}