#include <stdio.h>

int main(){

int i;
char nome[20];

gets(nome);

for(i=0;i<4;i++){
    printf("%c", nome[i]);
}
return 0;
}
