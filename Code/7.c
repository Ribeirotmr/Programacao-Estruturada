#include <stdio.h>
#include <string.h> 

typedef struct  {
    char nome[100];
    int idade;
    float nota;
} Aluno;

;

int main(){ 
    Aluno aluno;

    printf("Digite o nome: \n");
    scanf("%s", &aluno.nome);
    printf("Digite a idade: \n");
    scanf("%d", &aluno.idade);
    printf("Digite a nota: \n");
    scanf("%f", &aluno.nota); 



    printf("Nome: %s\n", aluno.nome);
    printf("Nome: %d\n", aluno.idade);
    printf("Nome: %.1f\n", aluno.nota);

    return 0;

    

} 