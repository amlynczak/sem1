#include<stdio.h>
#include<math.h>

float calculate(float *liczba, int zaokr){
    return floor(pow(10,zaokr) * *liczba)/pow(10,zaokr);
}

int main(){
    float zmienna = 1.123456;
    float *adres = &zmienna;
    int k = 3;
    float n = calculate(&zmienna,k);
    printf("liczba: %f \n", &n);

}