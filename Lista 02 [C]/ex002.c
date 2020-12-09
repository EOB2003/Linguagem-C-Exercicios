
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*2. Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
numero eh invalido.*/

int main(){

    float n;

    printf("Insira um numero:\n");
    scanf("%f", &n);

    if(n > 0){
        float q = sqrt(n);
        printf("A raiz quadrada eh: %f", q);
    } else{
        printf("O numero eh invalido");
    }

    printf("\n");

    system("pause");

    return 0;
}
