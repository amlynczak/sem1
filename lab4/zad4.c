#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 6
#define max 49

int i_rand(int maxi, int min){
    return rand()%(maxi-min+1) + min;
}

int sprawdzam(int t[], int n1, int x){
    for(int i=0; i<n1; i++){
        if(t[i]==x) return 1;
    }
    return 0;
}

void losowanie(int *wynik_losowania){
    int p;
    for(int i=0; i<n; i++){
        do{
            wynik_losowania[i] = i_rand(max, 1);
            p = sprawdzam(wynik_losowania, i, wynik_losowania[i]);
        }while(p==1);
    }
}

int wygrana(int los[], int wygrane[]){
    int k = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(los[i]==wygrane[j]) k++;
        }
    }
    return k;
}

int main(){
    srand(time(NULL));
    int lotto[n];
    /*losowanie(lotto);
    for(int i=0; i<n; i++){
        printf("%d |", lotto[i]);
    }
    printf("\n");*/

    int los[] = {39,5,1,4,19,11};
    int w;

    for(int i=1; i<=365; i++){
        printf("losowanie %d: \n", i);
        losowanie(lotto);
        for(int i=0; i<n; i++){
            printf("%d |", lotto[i]);
        }
        printf("\n");

        w = wygrana(los, lotto);
        printf("trafionych: %d \n", w);
        if(w==6) printf("WYGRANE \n");
    }

}