#include<stdio.h>

int dodaj(int *a, int b){
    *a = *a + b;
}

int main(){
    int x = 12;
    int y = 7;
    printf("wartosc x: %d \n", x);

    dodaj(&x, y);

    printf("wartosc x: %d \n", x);
}