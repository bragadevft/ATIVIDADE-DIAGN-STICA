#include <stdio.h>

int main()
{
/*QUESTAO 02 – Faça um programa em C que receba o valor do salário 
base, valor da hora extra, quantas horas extras foram feitas e retorne 
em tela o valor total a ser recebido pelo funcionário.*/
    float sal;
    printf("Informe o seu salário: ");
    scanf("%f", &sal);
    float quantiExtra;
    printf("Informe quantas horas extras você fez: ");
    scanf("%f", &quantiExtra);
    float valorExtra = 20;
    float salTotal = sal + valorExtra * quantiExtra;
    printf("O valor total a receber é: %f\n", salTotal);
    return 0;                                               
}