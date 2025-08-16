#include <stdio.h>

int main()
{
    /*QUESTAO 04 – Faça um programa em C que receba o preço de um 
    determinado produto e o seu percentual de desconto. Exiba em tela o 
    valor final do produto.
    */
    float preco;
    printf("Insira o preço deste produto é: ");
    scanf("%f", &preco);
    float desc;
    printf("Insira o desconto que quer aplicar: ");
    scanf("%f", &desc);
    float valorFinal = preco - (preco * desc/100);
    printf("O valor deste produto é: %f", valorFinal);
    return 0;
}
