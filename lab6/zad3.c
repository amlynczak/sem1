#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>

float f_rand(int min, int max){
    float r = (float) rand()/RAND_MAX;
    return r*(max-min) + min;
}

float bladzenie(float polozenie){
    int k = rand()%2;
    if(k==0) k=-1;
    polozenie = k * f_rand(0.25, 1);
    return polozenie;
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int n = atoi(argv[1]);
    float place[n];
    place[0] = 0;
    for(int i=1; i<n; i++){
        place[i] = bladzenie(place[i-1]);
    }
    if(n<10){
        for(int i=0; i<n; i++){
            printf("krok %d, polozenie: %f \n", i, place[i]);
        }
    }else{
        for(int i=n-10; i<n; i++){
            printf("krok %d, polozenie: %f \n", i, place[i]);
        }
    }
}
