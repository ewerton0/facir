#include <stdio.h>

int main(){

char nome[30], sexo;
int idade;
printf("digite um nome: ");
gets(nome);
printf("digite o sexo f ou m: ");
scanf("%c", &sexo);
printf("digite a idade: ");
scanf("%d", &idade);

if(sexo=='f' && idade<25){
    printf("%s ACEITA", nome);
}else{
    printf("%s NAO ACEITA", nome);
    }
return 0;
}
