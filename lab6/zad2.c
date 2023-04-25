#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 3

void hex(int p){
	char tab[N+1];

    if(p>4095){
        printf("%d nie da sie zamienic na trzycyfrowa liczbe szesnastkowa\n", p);
        }else if(p<0){
            printf("%d jest liczba ujemna \n", p);
        }else if(p>0, p<4096){
            char znaki[16] = "0123456789ABCDEF";
            int copy_p = p;
            for(int j=3; j--; j>0){
            int n = copy_p%16;
            tab[j] = znaki[n];
            copy_p = floor(copy_p/16);
        }
        tab[N]='\0';
	    printf("%4d = %s\n", p, tab);
    }
}

int main(void){
	for(int i=-2; i<=4097; i++)
		if(i<3 || (i>8 && i<17) || i>4093 || i%1000==0)
			hex(i);
	return 0;
}
