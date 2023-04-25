#include <stdio.h>

void merge(int *tab1, int *tab2, int n1, int n2){ //n1 n2 to rozmiary tablic
    int tab3[n1+n2];
    int i1=0, i2=0;
    for(int k=0; k<n1+n2; k++){
        if(i2 >= n2 || (i1 < n1 && tab1[i1] < tab2[i2])){
            tab3[k] = tab1[i1];
            i1++;
        }
        else{
            tab3[k] = tab2[i2];
            i2++;
        }
    }
    
    printf("tablica result: ");
    for(int i = 0; i < n1+n2; i++){
        printf("%i ", tab3[i]);
        }
        printf("\n");
        
}


int main()
{
    int t1[5]={1, 12, 13, 14, 22}, t2[8]={3, 4, 13, 45, 54, 55, 56, 66};
    merge(t1, t2, (sizeof(t1) / sizeof(int)), (sizeof(t2) / sizeof(int)));
    return 0;
}
