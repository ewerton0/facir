#include <stdio.h>

int main(){

    int i, j=0;
    char frase[50];

    printf("digite uma frase:");
    gets(frase);

    for(i=0;frase[i]!='\0';i++){
        if (frase[i] == ' '){
            j++;
        }
    }
    printf("a frase tem %d caracteres em branco", j);

return 0;
}
