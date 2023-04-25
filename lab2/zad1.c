#include<stdio.h>
int main(void){
    int n=2, k=0;
    while(n<=100){
        if(n%5!=0){
            if(n%4!=0){
                printf("%d ", n);
                k++;
                }
        }
        n=n+2;
     }
     printf("\n znaleziono %d liczb", k);
}
