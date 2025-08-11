/* Degustação de chá às escuras é a habilidade de identificar um chá usando apenas seus sentidos do olfato e paladar.

Isto faz parte da Competição Ideal de Consumidores de Chá Puro (da sigla em inglês ICPC), que um programa de TV local está organizando. Durante o show, um bule de chá completo é preparado e são entregues uma xícara de chá para cada um dos cinco competidores. Os participantes devem cheirar, saborear e avaliar a amostra, de modo a identificar o tipo de chá, que pode ser: (1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá de ervas. No final, as respostas são verificadas para determinar o número de suposições corretas.

Dado o tipo de chá real e as respostas fornecidas, determinar o número de participantes que receberam a resposta correta.

Entrada
A primeira linha contém um inteiro T representando o tipo de chá (1 ≤ T ≤ 4). A segunda linha contém cinco inteiros A, B, C, D e E, que indica a resposta dada por cada competidor (1 ≤ A, B, C, D, E ≤ 4).

Saída
A saída contém um inteiro representando o número de concorrentes que obtiveram a resposta correta.

link: https://judge.beecrowd.com/pt/problems/view/2006

Felipe Brettas, 10 de Agosto de 2025
*/

#include <stdio.h> // Incluindo a biblioteca Standar Input/Output

int main() {
    int i = 0, corretas = 0, cha, respostas[6]; // Inicialização das variáveis, todas como números inteiros e um array de inteiros (respostas)
    
    scanf("%d", &cha); // Obtem qual é o chá correto
    scanf("%d %d %d %d %d", &respostas[0], &respostas[1], &respostas[2], &respostas[3], &respostas[4]); // Lê as respostas e armazena no array respostas
    
    for (; i < 5; i++) { // O Loop for lê cada uma das entradas do array, ignorando o último byte, que é o \0, e soma 1 para cada uma que seja igual ao correto 
        if (respostas[i] == cha) {
            corretas++;
        }
    }

    printf("%d\n", corretas); // Printa o número de respostas corretas

    return 0;
} 

