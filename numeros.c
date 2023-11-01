#include <stdio.h>

int numero;
int nummax=0;
int nummin=1;
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
            for (int i = 1; i <= cant; i++)
            {
                printf("Ingrese un numero.\n");
                scanf("%d", &numero);
                if (numero>nummax)
                {
                    nummax=0;
                    nummax=nummax+numero;
                }
                if (numero<nummin)
                {
                    nummin=0;
                    nummin=nummin+numero;
                }
            }
            printf("El numero maximo que has insertado es el: %d\n", nummax);
            printf("El numero minimo que has insertado es el: %d\n", nummin);

        }
        
    } while(opcion==1);
    return 0;
}

