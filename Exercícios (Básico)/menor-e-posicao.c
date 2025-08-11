/* 
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

Entrada
A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros. A segunda linha contém cada um dos N valores, separados por um espaço. Vale lembrar que nenhuma entrada haverá números repetidos.

Saída
A primeira linha apresenta a mensagem “Menor valor:” seguida de um espaço e do menor valor lido na entrada. A segunda linha apresenta a mensagem “Posicao:” seguido de um espaço e da posição do vetor na qual se encontra o menor valor lido, lembrando que o vetor inicia na posição zero.

link: https://judge.beecrowd.com/pt/problems/view/1180

Felipe Brettas, 10 de Agosto de 2025
*/

#include <stdio.h> // Incluindo a biblioteca Standar Input/Output

int main() {
    int N = 0, menor = 1000, i = 0, posicao = 0; // Inicializando todas as variáveis que serão utilizadas

    scanf("%d", &N); // Identificando o tamano do vetor X[N]
    int X[N]; // Inicializando o vetor X[N]

    for (; i < N; i++) { // Criando um loop for que vai ler cada valor e armazenar em cada posição i do vetor X[N]
        scanf("%d", &X[i]);

        if (X[i] < menor) { // Condicional para comparar o valor de cada entrada e ver se é o menor já apresentado e armazenar a posição
            menor = X[i];
            posicao = i;
        }
    } 

    // Imprime os resultados da posicao e valor
    printf("Menor valor: %d\n", menor); 
    printf("Posicao: %d\n", posicao);

    return 0;
}