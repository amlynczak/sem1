#include<stdio.h>

int zawartosc(char t[], int n, char x){
    for(int i=0; i<n; i++){
        if(x == t[i]) return 1;
    }
    return 0;
}

int main(void){
    char litery[] = "ABCDEFGHIJKLMNOPQRSTUWVXYZ";
    char litera;
    int sprawdzam;

    do{
        printf("podaj litere: ");
        scanf("%c", &litera);
        sprawdzam = zawartosc(litery, sizeof(litery)/sizeof(*litery), litera);
    }while(sprawdzam == 0);

    int n, k=0;

    for(int i=0; i<sizeof(litery)/sizeof(*litery); i++){
        if(litera == litery[i]) n = i;
    }

    int n1=n;
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<k; j++){
            printf(" ");
        }
        for(int j=n1; j>0; j--){
            printf("%c", litery[j]);
        }
        for(int j=0; j<=n1; j++){
            printf("%c", litery[j]);
        }
        printf("\n");
        k++;
        n1--;
    }
}