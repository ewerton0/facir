#include <stdio.h>

int main(){

char nome[20];

gets(nome);

if(nome[0]=='a' || nome[0]=='A'){
    printf("%s", nome);
}
return 0;
}
