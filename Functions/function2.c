#include<stdio.h>
void namaste();
void bonjour();
void hola();
void konichiwa();

int main(){
    printf("Enter i for indian, f for french, s for spanish & j for japanese :");
    char ch;
    scanf("%c", &ch);
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

void namaste(){
printf("Namaste\n");
}
void bonjour(){
printf("Bonjour\n");
}
void hola(){
printf("Hola\n");
}
void konichiwa(){ 
printf("Konichiwa\n");
}