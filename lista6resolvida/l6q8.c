#include <stdio.h>

int main(){

char nome[20];
int i,j=0;

gets(nome);

for(i=0;nome[i] != '\0'; i++){
    if(nome[i]=='1'){
    j++;
    }
}
printf("a quantidade de 1 que tem eh: %d", j);
return 0;
}
