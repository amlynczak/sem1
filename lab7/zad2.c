#include <stdio.h>
#include <math.h>

void new_table(float *tab, int n, int k){
    if(n > k + 1){
        float sum = 0;  
        int m = k+1;  
        for(int i = n-1-k; i < n-1; i++)
            sum += tab[i];
        for(int i = n-1; i > k; i--){
            tab[i] = (tab[i] + sum) / m;  
            sum = sum - tab[i-1] + tab[i-k-1];  
        }
        
    }
    
    for(int i = 1; i <= k; i++){
        tab[i] = (tab[i] + tab[i-1]) / (i + 1);
        }
    for(int i=0;i<n;i++){
        printf("%g ", tab[i]);
        }
    printf("\n");
}


int main()
{
    int k;
    float t[6]={1, 2, 3, 4, 5, 4};
    printf("podaj liczbe poprzednich elementow (k): \n");
    scanf("%i", &k);
    new_table(t, (sizeof(t) / sizeof(float)), k);
    return 0;
}
