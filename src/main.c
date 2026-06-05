#include <stdio.h>
#include <string.h>
#include "alunos.h"

// Comando no CMD para compilar o main.c e o alunos.c e executar o main
// > gcc main.c alunos.c -o main && ./main

// Função principal
int main(){

    // Solicita a quantidade de alunos a serem cadastrados
    int qtdAlunos;    
    leiaQtdAlunos(&qtdAlunos);

    // Declaração dos vetores e matrizes para armazenar os dados dos alunos
    int idAluno[qtdAlunos];
    float mediaAluno[qtdAlunos];
    char situacao[qtdAlunos][TAM_SITUACAO];
    float notas[qtdAlunos][QTD_NOTAS]; 

    // ler os dados dos alunos
    leiaDadosAlunos(qtdAlunos, idAluno, notas);

    // calcular a média dos alunos
    calculeMediaAlunos(qtdAlunos, notas, mediaAluno);

    // verificar a situação dos alunos
    verificarSituacaoAluno(qtdAlunos, situacao, mediaAluno);

    // ordenar os alunos por maior média
    ordenarAlunosPorMaiorMedia(qtdAlunos, idAluno, mediaAluno, situacao);

    // exibir a maior e menor média da turma
    exibirMaiorEMenorMedia(idAluno, mediaAluno, qtdAlunos);

    // exibir o ranking dos alunos
    exibirRankingAlunos(qtdAlunos, idAluno, mediaAluno, situacao);
    
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;

}