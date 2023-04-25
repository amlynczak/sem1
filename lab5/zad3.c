#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>

static double gauss(void){
  double x = (double)random() / RAND_MAX,
         y = (double)random() / RAND_MAX,
         z = sqrt(-2 * log(x)) * cos(2 * M_PI * y);
  return z;
}
/* aggregate 100k cycles and display */
int main(){
  static long g[100], i = 0;
  srandom(time(NULL));
  for (i = 0; i < 100; i++){
    g[i] = gauss();
  }
  for(i=0; i<100; i++){
      printf("%2ld: %ld\n", i, g[i]);
  }
}