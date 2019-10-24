#include <stdio.h>

int main(){

     int i, j=0, k=0;
     char nome1[30], nome2[30];

     printf("digite o primeiro nome:");
     gets(nome1);
     printf("digite o segundo nome:");
     gets(nome2);

    for(i=0;nome1[i]!= '\0'; i++){
        j++;
    }for(i=0;nome2[i]!= '\0'; i++){
        k++;}

    for(i=j;nome1[i]>=0; i--){
        if(nome1[i]== 'A'){
            nome1[i]= '*';
            printf("%c", nome1[i]);
        }else{
            printf("%c", nome1[i]);}
     }printf("\n");
     for(i=k;nome2[i]>=0; i--){
        if(nome2[i]== 'A'){
            nome2[i]= '*';
            printf("%c", nome2[i]);
        }else{
            printf("%c", nome2[i]);}
     }
return 0;
}
