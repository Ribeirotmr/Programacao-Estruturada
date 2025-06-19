#include <stdio.h> 


int main(){

    float n1,n2; 
    float so = 0, su = 0, m = 0, div = 0;

    scanf("%f %f", &n1, &n2);

    so = n1 + n2;
    su = n1 - n2;

    if(n2 != 0){
        m = n1 * n2;
        printf("Media = %.2f\n", m);
    } else {
        printf("Divisao por 0");
    }


    printf("Soma = %.2f\n", so);
    printf("Subtracao = %.2f\n", su);
    printf("Multiplicacao = %.2f\n", m);

    return 0;

}