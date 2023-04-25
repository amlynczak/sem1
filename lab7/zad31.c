#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float f_rand(int min, int max){
    float r = (float) rand()/RAND_MAX;
    return r*(max-min) + min;
}

void bladzenie(int *x, int *y, float pg, float pd, float pp, float pl){
    float r = f_rand(0, 1);
    if(r < pg) ++*y;
    else if(r < pg+pd) --*y;
    else if(r < pg+pd+pp) ++*x;
    else --*x;
}

int main(void){
    srand(time(0));
    
    int steps=1000, x[10], y[10];
    
    for(int i = 0; i < 10; i++){
        x[i] = 0;
        y[i] = 0;
    }
    
    while(steps>0){
        for(int i = 0; i < 10; i++){
            bladzenie(&x[i], &y[i], 0.4, 0.1, 0.3, 0.2);
            }
        --steps;
        
    }
    
    for(int i = 0; i < 10; i++){
        printf("(%i, %i)\n", x[i], y[i]);
      }
    return 0;
}
