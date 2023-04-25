#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* read_file_to_string(char *filename);

int licznik(char a, char b, char *text){
    int k=0; //liczba powtorzen
    for(int i=0; i < strlen(text); i++){
    
    
        if(*text == a){
            if(*(text+1) == b){
                k++;
                }
        }
        
        
        text++;
    }
return k;
//printf("%d \n", k);



}

int main() 
{
    //char *filename = "pan-tadeusz-czyli-ostatni-zajazd-na-litwie.txt";

	//char *text =  read_file_to_string("pan-tadeusz-czyli-ostatni-zajazd-na-litwie.txt");
	char *text =  read_file_to_string("pan-tadeusz-czyli-ostatni-zajazd-na-litwie-ksiega-1.txt");
	int r = strlen(text);
    
    for(int i=0; i < strlen(text); text++){
        *text = tolower(*text);
        }
    for(int i=r; i > 0; i--){
    text--;
    }
	puts(text);
	char litery[] = "abcdefghijklmnoprstuwyz";
	char znaki[] = ",.:;\"\' ";
 char spacja = ' ';
 char inne[] = "inne";
	printf("%4c|", spacja);
  for(int i=0; i<strlen(litery); i++){
    printf("%4c|", litery[i]);
    }
    printf("%4s|", inne);
    printf("\n");
	for(int i=0; i<strlen(litery); i++){
	    char znak1 = litery[i];
     printf("%4c|", litery[i]);
	    for(int j=0; j<strlen(litery); j++){
	        char znak2 = litery[j];
	        int n = licznik(znak1, znak2, text);
	        printf("%4d|", n);
	    }
	    int m=0;
	    for(int p=0; p<strlen(znaki); p++){
	        m = m + licznik(znaki[p], znak1, text);
	    }
	    printf(" %d |", m);
	    printf("\n");
	    
	    
	    } // sprawdzanie znakow

	

    return 0;
}


char* read_file_to_string(char *filename){

char * buffer = 0;
long length;
FILE * f = fopen (filename, "rb");

if (f)
{
	fseek (f, 0, SEEK_END);
	length = ftell (f);
	fseek (f, 0, SEEK_SET);
	buffer = malloc (length);
	if (buffer)
		fread (buffer, 1, length, f);
	fclose (f);
}
else {
	
	printf("No file found: %s \n",filename);
}
if (buffer)
	return buffer;
else return "";

}



