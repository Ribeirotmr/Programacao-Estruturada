#include <stdio.h>


# define MAX 10


int main() {
    int N[MAX];
    int i; 
    

    printf("Digitie os 10 numeros: \n");

    for( i = 0; i < MAX; i++){
        scanf("%d", &N[i]);
    }

    printf("Os números em ordem inversa são:\n");
    for(i = MAX - 1; i >= 0; i--) {
        printf("V[%d] = %d\n", i, N[i]);
    }

    return 0; 

}

