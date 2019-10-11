#include <stdio.h>

int main(){
int i;
char nome[20];

gets(nome);

i=0;
while(nome[i] != '\0'){
    i++;
}
printf("%d", i);

return 0;
}


