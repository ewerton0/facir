#include <stdio.h>
#include <ctype.h>
int main(){

int i,x=0;
char nome[20];

gets(nome);
i=0;
while(nome[i] != '\0'){
    if(isalpha(nome[i])){
    x++;
    }
    i++;
}
printf("%d", x);

return 0;
}
