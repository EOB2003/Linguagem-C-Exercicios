#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;

    printf("Insira um numero: \n");
    scanf("%f", &n);

    if(n > 0){
        float raiz = sqrt(n);
        printf("Raiz quadrada: %f", raiz);
    } else{
        float quadrado = n * n;
        printf("Potencia ao quadrado: %f", quadrado);
    }

    printf("\n");

    system("pause");

    return 0;
}
