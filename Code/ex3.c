#include <stdio.h>
#include <string.h>

struct mais_velho {
    char nome[30];
    int idade;
};

int main(){

    struct mais_velho velho[4];
    struct mais_velho veio;

    veio.idade = -1;


    for(int i = 0; i < 4; i++){
        printf("Digite o nome: ");
        scanf("%s", &velho[i].nome);
        printf("Digite a idade : ");
        scanf("%d", &velho[i].idade);

        if(velho[i].idade > veio.idade){
            veio = velho[i];
        }
    }

    printf("\nO paciente mais velho é %s com %d anos.\n", veio.nome, veio.idade);
    
    

    return 0;
}