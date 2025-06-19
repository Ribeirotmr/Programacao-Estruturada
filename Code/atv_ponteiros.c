#include <stdio.h> 
#include <stdlib.h>


void valores(float * menor, float * maior, float *media){
    float valor_a, valor_b, valor_c;

    printf("Digite os valores de a, b e c :\n");
    scanf("%d%d%d ", &valor_a, &valor_b, &valor_c);

    *menor = valor_a;

    if(valor_b < *menor){
        *menor = valor_b;
    }

    if(valor_c < *menor){
        *menor = valor_c;
    }

    *maior = valor_a;

    if(valor_b > *maior){
        *maior = valor_b;
    }

    if(valor_c > *maior){
        *maior= valor_c;
    }

    


}