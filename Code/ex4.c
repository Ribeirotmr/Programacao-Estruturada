#include <stdio.h>
#include <string.h>

struct Idade {
    double idade;
};

int main() {
    int n; 
    double media = 0;

    printf("Digite a quantidade de cadastros: ");
    scanf("%d", &n);

    struct Idade id[n]; 

    for (int i = 0; i < n; i++) {
        printf("Digite a idade do cadastro %d: ", i + 1);
        scanf("%d", &id[i].idade);
        media += id[i].idade / n;
    } 



    printf("\nMédia das idades: %.2f\n", media);

    return 0;
}
