#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int n, i;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    
    vetor = malloc(n * sizeof(int));

   

   
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    
    printf("Elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    free(vetor);

    return 0;
}
