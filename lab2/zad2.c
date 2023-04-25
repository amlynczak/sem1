#include<stdio.h>
#define eps 1e-8
int main(void){
    int k=0;
    double n=1.0, suma = 0, x;
    while(1/(n*n) > eps){
        x = 1(n*n);
        suma = suma + x;
        k++;
        n++;
    }

printf("Suma %d elementow: %lf /n", k, suma);

    }