#include<stdio.h>

int odwrotnosc(float *x){
    if(x==0) return 1;
    *x = 1/(*x);
    return 0;
}

int main(){
    float a = 2.4323;
    int i = odwrotnosc(&a);
    printf("liczba odwrotna: %f, czy zostalo odwrocone: %d", a, i);

}