#include<stdio.h>
int main(void){
    int n, i, j, k=0;
   do{printf("podaj wysokosc: ");
        scanf("%d", &n);
        }while(n<=0);
        
    for(i=n; i>0; i--){
        for(j=0; j<k; j++){
            printf(" ");
        }
        k++;
        for(j=0; j<=(2*i-2); j++){
            printf("*");
                }
    printf("\n");
        }
    
    }
