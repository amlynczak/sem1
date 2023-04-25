#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float f_rand(int min, int max){
    float r = (float) rand()/RAND_MAX;
    return r*(max-min) + min;
}

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  srand(time(0));
  float f1[n];
  float f2[n];
  for(int i=1; i<=n; i++){
    f1[i] = f_rand(-1, 1);
    f2[i] = f_rand(-1, 1);
    printf("liczby: %f, %f \n", f1[i], f2[i]);
    float suma = pow(f1[i], 2) + pow(f2[i], 2);
    if(suma < 1) printf("suma jest mniejsza od 1 \n");
    else printf("suma jest wiekasza od 1 \n");
    }  
  }
