#include <stdio.h>

int main(){
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if( a > b && a > c){
        printf("a = %d\n", a);
    } else if(b > a && b > c){
        printf("b = %d\n", b);
    } else {
        printf("c = %d\n", c); 
    }

    return 0; 
}
