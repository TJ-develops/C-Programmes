#include <stdio.h>
int main() {
    int num, square;
    printf("Enter an integer: ");
    scanf("%d", &num);
    square = num * num;
    printf("Square of %d is %d\n", num, square);
    return 0;
}
