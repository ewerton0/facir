#include <stdio.h>

int main(){

int i;
char nome[20];

gets(nome);

for(i=0; nome[i]!='\0'; i++){
    if(nome[i]!='a' && nome[i]!='e' && nome[i]!='i' && nome[i]!='o' && nome[i]!='u'){
        printf("%c", nome[i]);
    }
}
return 0;
}
