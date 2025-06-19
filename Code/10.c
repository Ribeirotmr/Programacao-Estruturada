#include <stdio.h>

#include <string.h>


int main(){
    char nome[100];
    int qtd = 0;


    printf("Digite o nome: \n");
    scanf("%s", &nome);

    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u')
        qtd++;
    }

    printf("%d\n", qtd);
    
    return 1;
}