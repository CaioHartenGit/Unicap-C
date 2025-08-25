// Calculo de IMC -> Em C
#include <stdio.h>

int main(void){

    float peso;
    printf("\nDigite seu Peso:\n ");
    scanf("%f" , &peso);

    printf("\nSeu peso é: %.2f \n", peso);

    float altura; 
    printf("\nDigite sua altura: ");
    scanf("%f", &altura);

    printf("\nSua altura é: %.2f \n", altura);

    double IMC = peso / (altura*altura);

    printf("\nSeu IMC é %.2f \n", IMC);

    return 0; 
}
