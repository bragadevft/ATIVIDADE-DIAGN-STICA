#include <stdio.h>

int main()
{
/*QUESTAO 01 – Faça um programa em C que receba do usuário o valor 
de temperatura em Celsius e converta o valor para ° Fahrenheit.*/

    float cel;  
    printf("Informe o valor que deseja converter: ");
    scanf("%f", &cel);
    float fah = cel * 9.0 / 5.0 + 32.0;
    printf("Temperatura convertida em Fahrenheit: %f\n", fah);
    return 0;
}

