#include <stdio.h>

int main(){

    int i;
    char nome[50];

    printf("digite uma palavra: ");
    gets(nome);

    for(i=0;nome[i]!='\0';i++){
        nome[i] += 1;
    }
    printf("%s", nome);
return 0;
}
