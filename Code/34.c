#include <stdio.h>
#include <stdlib.h>

int inverter_vetor(int *v1, int *v2, int n){
    int maior = v1[0];

    for(int i = 0; i < n; i++){
        v2[n - 1 - i] = v1[i];

        if(v1[i] > maior) {
            maior = v1[i];
        }
    }

    return maior;
}



int main(){

    int n;

    printf("Digite o tamanho dos vetores: \n");
    scanf("%d", &n);

    int v1[n], v2[n];

    printf("Digite o vetor v1: \n");
    for(int i = 0; i < n; i++){
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);

    }

    int maior = inverter_vetor(v1, v2, n);


    printf("Vetor v2 invertido: \n");
    for(int i = 0; i < n; i++){
        printf("v2[%d] = %d\n", i, v2[i]);
    }
    printf("\n");

    printf("maior valor em v1 = %d\n", maior);

    return 0;


}
