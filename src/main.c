#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Protótipos das funções
void leiaDadosAlunos(int qtdAlunos, int idAluno[], float notas[][3]);
void calculeMediaAlunos(int qtdAlunos, float notas[][3], float mediaAluno[]);
void verificarSituacaoAluno(int qtdAlunos, char situacao[][12], float mediaAluno[]);
void ordenarAlunosPorMaiorMedia(int qtdAlunos, int idAluno[], float mediaAluno[], char situacao[][12]);
void exibirMaiorEMenorMedia(int idAluno[], float mediaAluno[], int qtdAlunos);
void exibirRankingAlunos(int qtdAlunos, int idAluno[], float mediaAluno[], char situacao[][12]);

// Função principal
int main(){

    // Solicita a quantidade de alunos a serem cadastrados
    int qtdAlunos;    
    printf("Informe a quantidade de alunos a serem cadastrados:\n");
    scanf("%d", &qtdAlunos);

    // Declaração dos vetores e matrizes para armazenar os dados dos alunos
    int idAluno[qtdAlunos];
    float mediaAluno[qtdAlunos];
    char situacao[qtdAlunos][12];
    float notas[qtdAlunos][3]; 

    // ler os dados dos alunos
    leiaDadosAlunos(qtdAlunos, idAluno, notas);

    // Chama aFunção para calcular a média dos alunos
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

// Ler os dados dos alunos
void leiaDadosAlunos(int qtdAlunos, int idAluno[], float notas[][3]){
    for(int i = 0; i < qtdAlunos; i++) {
        printf("\nInforme o código do aluno %d: ", i + 1);
        scanf("%d", &idAluno[i]); 

        for(int j = 0; j < 3; j++) {    
            do {
                printf("Informe a nota %d: ", j + 1);
                scanf("%f", &notas[i][j]); 
            }while (notas[i][j] > 10 || notas[i][j] < 0);            
        }
    }
}

// Calcular a média dos alunos
void calculeMediaAlunos(int qtdAlunos, float notas[][3], float mediaAluno[]){
    float soma = 0;
    for(int i = 0; i < qtdAlunos; i++) {
        for(int j = 0; j < 3; j++) {    
            soma += notas[i][j];	           
        }
        mediaAluno[i] = soma / 3;
        soma = 0;
    }    
}

// Verificar a situação dos alunos
void verificarSituacaoAluno(int qtdAlunos, char situacao[][12], float mediaAluno[]){
    for(int i = 0; i < qtdAlunos; i++){
        if(mediaAluno[i] >= 7){
            // Copia a string para o vetor de destino
            strcpy(situacao[i], "APROVADO"); 
        } else if (mediaAluno[i] >= 5){
            strcpy(situacao[i], "RECUPERACAO");
        } else {
            strcpy(situacao[i], "REPROVADO");
        }
    }
}

// ordenar os alunos por maior média usando o algoritmo de ordenação Bubble Sort
void ordenarAlunosPorMaiorMedia(int qtdAlunos, int idAluno[], float mediaAluno[], char situacao[][12]){
    for(int i = 0; i < qtdAlunos - 1; i++) {
        for(int j = 0; j < qtdAlunos - i - 1; j++) {
            if(mediaAluno[j] < mediaAluno[j + 1]) {
                // Troca as médias
                float tempMedia = mediaAluno[j];
                mediaAluno[j] = mediaAluno[j + 1];
                mediaAluno[j + 1] = tempMedia;

                // Troca os IDs dos alunos
                int tempId = idAluno[j];
                idAluno[j] = idAluno[j + 1];
                idAluno[j + 1] = tempId;

                // Troca as situações dos alunos
                char tempSituacao[12];
                strcpy(tempSituacao, situacao[j]);
                strcpy(situacao[j], situacao[j + 1]);
                strcpy(situacao[j + 1], tempSituacao);
            }
        }
    }
}

// Exibir a maior e menor média da turma
// A maior média estará na posição 0 do vetor após a ordenação, e a menor média estará na última posição do vetor
void exibirMaiorEMenorMedia(int idAluno[], float mediaAluno[], int qtdAlunos){
    printf("\n--------------------------------");
    printf("\nMaior media da turma -> Aluno ID %d | Nota %.2f\n", idAluno[0], mediaAluno[0]);
    printf("Menor media da turma -> Aluno ID %d | Nota %.2f\n", idAluno[qtdAlunos - 1], mediaAluno[qtdAlunos - 1]);
    printf("--------------------------------");
}

// Exibir o ranking dos alunos
void exibirRankingAlunos(int qtdAlunos, int idAluno[], float mediaAluno[], char situacao[][12]){
    printf("\nRanking dos Alunos:\n");
    printf("ID do Aluno | Média | Situação\n");
    printf("--------------------------------\n");
    for(int i = 0; i < qtdAlunos; i++) {
        printf("%d | %.2f | %s\n", idAluno[i], mediaAluno[i], situacao[i]);
    }
}