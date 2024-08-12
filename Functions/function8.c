#include <stdio.h>
// Function prototype
void checkTemp(int temperature);

int main() {
    int temperature;
    printf("Enter the Temperature: ");
    scanf("%d", &temperature);
    // Call the function to check and print the temperature message
    checkTemp(temperature);
    return 0;
}
// Function definition
void checkTemp(int temperature) {
    if (temperature > 20) {
        printf("It's quite hot, isn't it.\n");
    } else if (temperature <= 0) {
        printf("It's quite chilling out there.\n");
    } else {
        printf("It's quite cold, isn't it.\n");
    }
}