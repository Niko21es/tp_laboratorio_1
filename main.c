#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int opcion=0;
    int ope1=0, ope2=0, resultado;

    do
    {

    system("CLS"); //Limpia la pantalla en cada nueva operación.

    printf("CALCULADORA\n\n");

        printf("1- Ingresar 1er operando (A=%d)\n", ope1);
        printf("2- Ingresar 2do operando (B=%d)\n", ope2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("\nIngrese una opcion: ");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\nIngrese el primer operando: ");
                scanf("%d", &ope1);
                break;
            case 2:
                printf("\nIngrese el segundo operando: ");
                scanf("%d", &ope2);
                break;
            case 3:
                resultado=sumar(ope1, ope2);
                printf("\nEl resultado de la suma es:  %d\n", resultado);
                break;
            case 4:
                resultado=restar(ope1, ope2);
                printf("\nEl resultado de la resta es:  %d\n", resultado);
                break;
            case 5:
                resultado=dividir(ope1, ope2);
                /*Ponemos la condicion de que no se pueda dividir entre 0 ya que de lo contrario el programa dará error*/
                    if(ope2==0)
                    {
                        printf("\nNo se puede dividir entre 0, intentalo otra  vez...\n ");
                    }
                    else
                    {
                        printf("\nEl resultado de la division es:  %d\n", resultado);
                    }
                break;
            case 6:
                resultado=multiplicar(ope1, ope2);
                printf("\nEl resultado de la multiplicacion es:  %d\n", resultado);
                break;
            case 7:
                resultado=factorial(ope1);
                if(ope2< 0)
                    {
                        printf("\nNo has introducido un numero valido...\n ");
                    }
                    else
                    {
                        printf("\nEl resultado del factorial es:  %d\n", resultado);
                    }
                break;
            case 8:
                resultado=sumar(ope1, ope2);
                printf("\nEl resultado de la suma es:  %d\n", resultado);
                resultado=restar(ope1, ope2);
                printf("\nEl resultado de la resta es:  %d\n", resultado);
                resultado=dividir(ope1, ope2);
                printf("\nEl resultado de la division es:  %d\n", resultado);
                resultado=multiplicar(ope1, ope2);
                printf("\nEl resultado de la multiplicacion es:  %d\n", resultado);
                resultado=factorial(ope1);
                printf("\nEl resultado del factorial es:  %d\n", resultado);
                break;
            case 9:
                printf("\nSaliendo...\n\n");
                break;

            default:
            printf("\nNo es una opcion valida, Por favor reingrese opcion entre 1 y 9\n");
        }

    system("PAUSE");

    /*Cuando el usuario selecciona la opción 9, el bucle termina y se cierra el programa*/
    }while(!(opcion==9));

    return 0;
}
