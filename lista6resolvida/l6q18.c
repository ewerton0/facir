#include <stdio.h>

int main(){

    int i;
    char nome[20], a, b;

    printf("digite um nome: ");
    gets(nome);
    printf("digite uma letra: ");
    scanf("%c", &a);
    printf("digite outra letra: ");
    scanf(" %c", &b);
    for(i=0;nome[i]!='\0'; i++){
        if(nome[i]== a){
            nome[i]=b;
        }
    }
    printf("%s", nome);
return 0;
}
