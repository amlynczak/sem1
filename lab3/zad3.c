#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
#define n 10

float f_rand(float min, float max){
	float r = (float) rand()/RAND_MAX;
	return r*(max-min) + min;
}

float srednia(float t[], int x){
    float suma = 0;
    for(int i=0; i<x; i++){
        suma = suma + t[i];
    }
    float srednia = suma/x;
    float suma1 = 0;

    for(int i=0; i<x; i++){
        suma1 = suma1 + pow((t[i] - srednia), 2);
    }
    float wariancja = suma1/x;
    printf("srednia: %f \n", srednia);
    printf("wariancja: %f \n", wariancja);
}

int main(){
    float tab[n];
    srand(time(NULL));

    for(int i=0; i<n; i++){
        tab[i] = f_rand(-3.0, 3.0);
    }

    for(int i=0; i<n; i++){
        printf("%f |", tab[i]);
    }
    printf("\n");

    srednia(tab, sizeof(tab)/sizeof(*tab));

}