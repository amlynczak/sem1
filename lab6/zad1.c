#include<stdio.h>
#include<math.h>

unsigned int count1(unsigned int p){
    unsigned int copy_p =p;
    int k = 0;
    
    while(copy_p >0){
        if(copy_p%2==0){
            copy_p = copy_p/2;
            }else{
            k++;
            copy_p = floor(copy_p/2);
            }
        } return k;   
    }
    
int main(void){
    unsigned int n = 250;
    unsigned int a = count1(n);    
    
    printf(" %d ma %d jedynek\n", n, a);
    
    }
