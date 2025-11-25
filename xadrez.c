#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas){
        if(casas > 0)
        {
            printf("A Torre moveu-se para a direita →!\n");
            moverTorre(casas - 1);
        }
    }

void moverBispo(int casas)
{
    if(casas > 0)
        {
            for(int i = 0; i < 1; i++)
            {
                printf("O Bispo moveu-se para cima ↑!\n");
                for(int j = 0; j < 1; j++)
                {
                    printf("O Bispo moveu-se para a a direita →!\n");
                }
            }
            moverBispo(casas - 1);
        }
}

void moverCavalo(int casas)
{
    if(casas > 0)
    {
        int f = 3;
        while(f > 1)
        {
            for(int i = 0; i < 2; i++, f--)
            {
                printf("O cavalo moveu-se para cima ↑!\n");
            }
            printf("O cavalo moveu-se para a direita →!\n");
        }
        moverCavalo(casas - 1);
    }
}

void moverRainha(int casas)
{
    if(casas > 0)
        {
            printf("A Rainha moveu-se para a esquerda ←!\n");
            moverRainha(casas - 1);
        }
}

int main() {
    printf("Movimento de Peças de Xadrez\nCoded by Miguel A. Queiroz\n\n");

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int mov_bispo = 5, mov_torre = 5;
    int mov_rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for(int i = 0; i < mov_bispo; i++)
    {
        printf("O Bispo moveu-se para a cima e para a direita ↗!\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for(int i = 0; i < mov_torre; i++)
    {
        printf("A Torre moveu-se para a direita →!\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for(int i = 0; i < mov_rainha; i++)
    {
        printf("A Rainha moveu-se para a esquerda ←!\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int f = 3;
    while(f > 1)
    {
        for(int i = 0; i < 2; i++, f--)
        {
            printf("O cavalo moveu-se para baixo ↓!\n");
        }
        printf("O cavalo moveu-se para a esquerda ←!\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\nMODO MESTRE ATIVADO!\n\n");

    moverTorre(5);
    moverBispo(5);
    moverRainha(8);
    moverCavalo(1);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\nFim do Programa.");

    return 0;
}
