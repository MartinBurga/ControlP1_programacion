#include <stdio.h>

int numero;
int cant;
int opcion;

int main(){
    printf("Bievenido a la calculadora de valores maximos y minimos.\n");
    do {
        printf("||------------------------------------------------||\n");
        printf("Inserta 1 para empezar.\n");
        printf("Inserta 2 para salir.\n");
        scanf("%d", &opcion);
        if (opcion==1)
        {
            printf("Inserte la cantidad de numeros que desee ingresar.\n");
            scanf("%d", &cant);
            for (int i = 0; i <= cant; i++)
            {
                printf("Ingrese un numero.\n");
                scanf("%d", &numero);

            }
            

        }
        
    } while(opcion==1);
    return 0;
}

