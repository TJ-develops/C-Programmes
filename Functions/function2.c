#include<stdio.h>
// Function prototypes
void namaste();    
void bonjour();
void hola();       
void konichiwa();  

int main(){
    // enter a character
    printf("Enter i for Indian, f for French, s for Spanish & j for Japanese :");
    char ch;
    scanf("%c", &ch);
    // Check which character was entered and call the function
    if(ch == 'i'){
        namaste();  
    }
    if(ch == 's'){
        hola();     
    }
    if(ch == 'f'){
        bonjour(); 
    }
    if(ch == 'j'){
        konichiwa(); 
    }
}
// Function definitions
void namaste(){
    printf("Namaste!\n");  
}
void bonjour(){
    printf("Bonjour!\n"); 
}
void hola(){
    printf("Hola!\n");     
}
void konichiwa(){
    printf("Konichiwa!\n");  
}