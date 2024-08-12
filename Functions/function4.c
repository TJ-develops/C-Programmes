#include <stdio.h>
#include <math.h>

int squarearea(int side);

int main() {
    int a = 6;
    int area = squarearea(a);
    printf("Area is : %d\n", area);
    return 0;
}
int squarearea(int side) {
    return side * side;
}