#include <stdio.h>

int main()
{
/*QUESTAO 03 – Faça um programa em C que calcule a érea e o 
perímetro de um círculo e exiba em tela. O usuário deve informar o 
raio.
*/
    float raio;
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);
    float area = raio * 3.14;
    float perimetro = 2 * raio * 3.14;
    printf("A área deste círculo é: %f\n", area);
    printf("O perímetro deste círculo é: %f", perimetro);
    return 0;
}
