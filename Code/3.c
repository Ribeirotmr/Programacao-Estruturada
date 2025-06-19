#include <stdio.h>



int main() {
    int n1, n2, n3 ,n4 ,n5;
    int media = 0;


    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    media = (n1+n2+n3+n4+n5)/5;

    printf("Media = %d\n", media);

    return 0;

}