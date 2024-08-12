#include<stdio.h>
// Function to print "Hello World!" a specified number of times
void printhw(int count);
int main(){
    // Call the function to print "Hello World!" 7 times
    printhw(7);
    return 0;
}
// Recursively prints "Hello World!" count times
void printhw(int count){
    if(count == 0)
        return; 
    printf("Hello World!\n");
     printhw(count - 1); // Recursive call with decremented count
}