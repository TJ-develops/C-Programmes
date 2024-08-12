#include <stdio.h>

// Function to calculate the sum of digits
int sumOfDigits(int n) {
    int sum = 0;  // Initialize sum
    int digit;

    while (n != 0) {
        digit = n % 10;  // Extract the last digit
        sum += digit;    // Add the digit to the sum
        n /= 10;         // Remove the last digit from the number
    }
    return sum;  // Return the total sum of digits
}
int main() {
    int n;
    // Input number from user
    printf("Enter a Number: ");
    scanf("%d", &n);
    // Calculate and print the sum of digits
    printf("Sum of digits: %d\n", sumOfDigits(n));
    return 0;
}
