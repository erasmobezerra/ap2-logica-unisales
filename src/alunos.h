// alunos.h

// Aqui será feita a interface do módulo alunos.
// A função do arquivo .h é declarar as funções e constantes do módulo

// É fundamental usar "Guards" (#ifndef, #define, #endif) para evitar que o arquivo seja 
// incluído mais de uma vez durante a compilação.

#ifndef alunos_h
#define alunos_h

#include <stdio.h>
#include <string.h>

// Definições de constantes
#define QTD_NOTAS 3
#define TAM_SITUACAO 12
#define MAX_ALUNOS 10

// Protótipos das funções (Interface do módulo)
void leiaQtdAlunos(int *qtdAlunos);
void leiaDadosAlunos(int qtdAlunos, int idAluno[], float notas[][QTD_NOTAS]);
void calculeMediaAlunos(int qtdAlunos, float notas[][QTD_NOTAS], float mediaAluno[]);
void verificarSituacaoAluno(int qtdAlunos, char situacao[][TAM_SITUACAO], float mediaAluno[]);
void ordenarAlunosPorMaiorMedia(int qtdAlunos, int idAluno[], float mediaAluno[], char situacao[][TAM_SITUACAO]);
void exibirMaiorEMenorMedia(int idAluno[], float mediaAluno[], int qtdAlunos);
void exibirRankingAlunos(int qtdAlunos, int idAluno[], float mediaAluno[], char situacao[][TAM_SITUACAO]);

#endif // alunos_h