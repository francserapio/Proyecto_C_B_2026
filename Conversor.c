#include <stdio.h>

// Tasas de cambio aproximadas
#define USD_TO_GTQ 7.80
#define EUR_TO_GTQ 8.50

int main() {
    int opcion;
    float cantidad, resultado;

    printf("=================================\n");
    printf("   CONVERSOR DE MONEDAS\n");
    printf("=================================\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dolares a Euros\n");
    printf("6. Euros a Dolares\n");
    printf("0. Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    if(opcion == 0){
        printf("Programa finalizado.\n");
        return 0;
    }

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad / USD_TO_GTQ;
            printf("Resultado: %.2f USD\n", resultado);
            break;

        case 2:
            resultado = cantidad / EUR_TO_GTQ;
            printf("Resultado: %.2f EUR\n", resultado);
            break;

        case 3:
            resultado = cantidad * USD_TO_GTQ;
            printf("Resultado: %.2f GTQ\n", resultado);
            break;

        case 4:
            resultado = cantidad * EUR_TO_GTQ;
            printf("Resultado: %.2f GTQ\n", resultado);
            break;

        case 5:
            resultado = (cantidad * USD_TO_GTQ) / EUR_TO_GTQ;
            printf("Resultado: %.2f EUR\n", resultado);
            break;

        case 6:
            resultado = (cantidad * EUR_TO_GTQ) / USD_TO_GTQ;
            printf("Resultado: %.2f USD\n", resultado);
            break;

        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}