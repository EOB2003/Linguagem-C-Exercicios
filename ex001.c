#include <stdio.h>
#include <stdlib.h>

/*1. Faca um programa que receba dois
numeros e mostre qual deles e o maior*/

int main(){

    int n1, n2;

    printf("Insira o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Insira o segundo numero:\n");
    scanf("%d", &n2);

    if(n1> n2){
        printf("Maior numero entre os dois: %d", n1);
    } else{
        printf("Maior numero entre os dois: %d", n2);
    }

    printf("\n");

    system("pause");

    return 0;
}
