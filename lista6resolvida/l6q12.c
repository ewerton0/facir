#include <stdio.h>

int main(){

int i, j=0;
char nome[20], caractere;

printf("digite um nome: ");
gets(nome);
printf("entre com um caractere: ");
scanf("%c", &caractere);

for(i=0; nome[i]!='\0'; i++){
    if(nome[i]=='a' || nome[i]=='e' || nome[i]=='i' || nome[i]=='o' || nome[i]=='u'){
    nome[i]=caractere;
    j++;
    }
    }
printf("o nome tem %d vogais\n", j);
printf("%s", nome);
}
