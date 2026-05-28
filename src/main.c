#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

void ordenarAlunosMediaDescrecente(int qtdAlunos, int idAluno[], float mediaAluno[], char situacao[][12]){
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

void exibirMaiorEMenorMedia(int idAluno[], float mediaAluno[], int qtdAlunos){
    printf("\nA maior media da turma | Aluno ID %d | Nota %.2f\n", idAluno[0], mediaAluno[0]);
    printf("A menor media da turma | Aluno ID %d | Nota %.2f\n", idAluno[qtdAlunos - 1], mediaAluno[qtdAlunos - 1]);
}




void exibirRankingAlunos(int qtdAlunos, int idAluno[], float mediaAluno[], char situacao[][12]){
    printf("\nRanking dos Alunos:\n");
    printf("ID do Aluno | Média | Situação\n");
    printf("--------------------------------\n");
    for(int i = 0; i < qtdAlunos; i++) {
        printf("%d | %.2f | %s\n", idAluno[i], mediaAluno[i], situacao[i]);
    }
}


int main(){

    int qtdAlunos;
    
    printf("Informe a quantidade de alunos a serem cadastrados:\n");
    scanf("%d", &qtdAlunos);

    int idAluno[qtdAlunos];
    float mediaAluno[qtdAlunos];
    char situacao[qtdAlunos][12];
    float notas[qtdAlunos][3];

    leiaDadosAlunos(qtdAlunos, idAluno, notas);
    calculeMediaAlunos(qtdAlunos, notas, mediaAluno);
    verificarSituacaoAluno(qtdAlunos, situacao, mediaAluno);
    ordenarAlunosMediaDescrecente(qtdAlunos, idAluno, mediaAluno, situacao);

    exibirMaiorEMenorMedia(idAluno, mediaAluno, qtdAlunos);
    exibirRankingAlunos(qtdAlunos, idAluno, mediaAluno, situacao);

    return 0;

}