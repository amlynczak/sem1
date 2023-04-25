#include <stdio.h>
#include <string.h>

int pass(char *haslo_test){
    char haslo[] = "Rt&3#";
    
    if (strcmp(haslo_test, haslo) == 0 ){
        return 0;
    }
    else
        return 1;
} //dane

int try_passwords(){
    char chars[] = " !\"#$%&'()*+,-./:;<?@[\\]^_`{|}~abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    int n = sizeof chars / sizeof chars[0];
    char test[] = "   3 ";
    for(int a=0; a < n; a++){
        test[0] = chars[a];
        for(int b=0; b < n; b++){
            test[1] = chars[b];
            for(int c=0; c < n; c++){
                test[2] = chars[c];
                for(int d=0; d < n; d++){
                    test[4] = chars[d];
                    if(pass(test) == 0){
                        char txt[] = "znaleziono haslo";
                        printf("%s\n", txt);
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}


int main()
{
    try_passwords();
    return 0;
}
