int main()
{
/*QUESTAO 05 – Faça um programa em C que resolva o seguinte 
enunciado:
Em uma fábrica, 8 máquinas produzem 120 peças em 5 horas. Se 
todas as máquinas trabalharem na mesma velocidade, quantas 
peças serão produzidas por 10 máquinas no mesmo período?*/
    int a = 8;
    int b = 120;
    int z = b / a;
    int x = z * 10;
    printf("Está fábrica passará a produzir %d peças.", x);
    return 0;
}
