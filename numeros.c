// Realice un programa que lea un número entero positivo n y a continuación lea n números y despliegue tanto el valor
// máximo como la posición en el conjunto de números introducido donde ocurre el máximo.
// A su vez, también realice lo mismo pero para el mínimo valor.

#include <stdio.h>

int numero;
int nummax=0;
int nummin=10000010;
int cant;
int opcion;
int jmax;
int jmin;

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
                    jmax=i;
                }
                if (numero<=nummin)
                {
                    nummin=0;
                    nummin=nummin+numero;
                    jmin=i;
                }
            }
            printf("El numero maximo que has insertado es el: %d\n", nummax);
            printf("Esta en la posicion %d de todos los numeros que insertaste.\n", jmax);
            printf("El numero minimo que has insertado es el: %d\n", nummin);
            printf("Esta en la posicion %d de todos los numeros que insertaste.\n", jmin);
            printf("||------------------------------------------------||\n");

        }
        
    } while(opcion==1);
    return 0;
}

