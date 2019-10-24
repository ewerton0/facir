#include <stdio.h>


int main(){

	int i;
	char nome[20];

	printf("digite uma palavra com letras minusculas: ");
	gets(nome);

	for(i=0 ;nome[i]!='\0'; i++){
		if(nome[i] >= 97 && nome[i] <= 122){
            nome[i] -= 32;
	}}
	printf("%s", nome);

	return 0;
}

