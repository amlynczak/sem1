#include<stdio.h>
#include<string.h>
#include "pi.c" 

int ilosc(char t[], int n, char a){
  int k=0;
  for(int i=0; i<n; i++){
    if(t[i]==a) k++;
  }
  return k;
}

int podciagi(char t[], int n, char a[2]){
  int k=0;
  for(int i=0; i<n; i++){
    if(t[i]==a[0]){
      if(t[i+1]==a[1]) k++;
    }
  }
  return k;
}

int main(void){
  char cyfry[] = "1234567890";
  
  for(int i=0; i<10; i++){
    int k = ilosc(pi, sizeof(pi)/sizeof(*pi), cyfry[i]);
    printf("ilosc wystapien %c w pi: %d \n", cyfry[i], k);
  }

  char jd[] = "12";
  char tt[] = "33";

  int k1 = podciagi(pi, sizeof(pi)/sizeof(*pi), jd);
  int k2 = podciagi(pi, sizeof(pi)/sizeof(*pi), tt);

  printf("ilosc wystapien podciagu %s w pi: %d \n", jd, k1);
  printf("ilosc wystapien podciagu %s w pi: %d \n", tt, k2);
}