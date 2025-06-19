#include <stdio.h>


int main() {
    int m[2][2];
    int i, j; 

    printf("Preencha a matriz\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++ ){
            scanf("%d", &m[i][j]); 
        }
    }

    printf("Matriz\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }

    printf("Transposta\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d", m[j][i]);

        }
        printf("\n");

    }
    
}