#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include <stdlib.h>

int i_rand(int min, int max){
	return rand() % (max-min+1) + min;
}

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  srand(time(0));
  char znaki[] = "!\"#$%&'()*+,-./:;<?@[\\]^_`{|}~abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
  char haslo[n];
  
  for(int i=0; i<n; i++){
    haslo[i] = znaki[i_rand(0, 39)];
    } 
  
  printf("twoje haslo to %s\n", haslo);
  }