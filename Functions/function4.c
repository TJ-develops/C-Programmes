#include <stdio.h>
#include <math.h>
// Function to calculate the area of a square
int squarearea(int side);
int main() {
    int a = 6;
    int area = squarearea(a);
    printf("Area is : %d\n", area);
    return 0;
}
// Returns the area of a square given the side length
int squarearea(int side) {
    return side * side;
}