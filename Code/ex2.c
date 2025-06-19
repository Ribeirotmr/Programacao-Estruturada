#include <stdio.h>
#include <string.h>

struct paciente {
    char nome[30];
    int idade;
    double peso;
    double altura;
};

int main() {
    struct paciente pacientes[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do paciente %d: ", i + 1);
        scanf("%s", pacientes[i].nome);
        printf("Digite a idade de %s: ", pacientes[i].nome);
        scanf("%d", &pacientes[i].idade);
        printf("Digite o peso de %s (em kg): ", pacientes[i].nome);
        scanf("%lf", &pacientes[i].peso);
        printf("Digite a altura de %s (em metros): ", pacientes[i].nome);
        scanf("%lf", &pacientes[i].altura);
        printf("\n");
    }

    printf("Resultados:\n");
    for (int i = 0; i < 5; i++) {
        double imc = pacientes[i].peso / (pacientes[i].altura * pacientes[i].altura);

        printf("%s (idade %d): IMC = %.2f - ", pacientes[i].nome, pacientes[i].idade, imc);
        if (imc > 24.9) {
            printf("Acima do peso ideal.\n");
        } else {
            printf("Dentro do peso ideal.\n");
        }
    }

    return 0;
}
