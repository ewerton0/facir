#include <stdio.h>

int main(){

    int i, j=0;
    char frase[50];

    printf("digite uma frase:");
    gets(frase);

    for(i=0;frase[i]!='\0';i++){
        if (frase[i] != ' '){
            printf("%c",frase[i]);}
    }
    return 0;
}
