/**
 * @file trabalho.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    float soma,subtracao,multiplicacao,divisao;

    printf("Digite o primeiro numero: ");
    scanf("%g",&n1);
    printf("Digite o segundo numero: ");
    scanf("%g",&n2);
    
    soma = n1+n2;
    subtracao = n1-n2;
    multiplicacao = n1*n2;
    divisao = n1/n2;

    printf("Soma: %g \nSubtracao: %g \nMultiplicacao: %g \nDivisao: %g \n",soma,subtracao,multiplicacao,divisao);
    system("pause");

    
}

/**
 * @brief 
 * 
 */