#include <stdio.h>

int numero;
int opcion;

int main(){
    printf("Bievenido a la calculadora de numeros mayores.\n");
    do {
        printf("Inserta 1 para empezar.\n");
        printf("Inserta 2 para salir.\n");
        scanf("%d", &opcion);
    } while(opcion==1);
    return 0;
}

