#include <stdio.h>

int main(){

int x, y, i=0, j=0, m, n;
char string1[30], string2[30];

gets(string1);
gets(string2);

for(int x=0;string1[x] != '\0'; x++){
n=("%d",  string1[x]);
i+=n;
}for(int y=0;string2[y] != '\0'; y++){
m=("%d", string2[y]);
j+=m;
}
if(i>j){
    printf("string maior = %s", string1);
}if(i<j){
    printf("string maior = %s", string2);}
if(i==j){
    printf("strings iguais");
}

return 0;
}
