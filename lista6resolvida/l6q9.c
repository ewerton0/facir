#include <stdio.h>

int main(){

char nome[20];
int i;

gets(nome);

for(i=0;nome[i] != '\0'; i++){
    if(nome[i] == '0'){
    nome[i]='1';
    }
}
printf("%s", nome);
return 0;
}
