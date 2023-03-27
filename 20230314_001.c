#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *vetor, int quantidade, float *media, float *desvio){
    float soma = 0;
    float somatoria =0;
    for(int i =0; i < quantidade; i++){
        soma += *(vetor +i);
    }
    *media = soma/quantidade;
    for(int i=0; i < quantidade; i++){
        somatoria += (*(vetor + i) - *media) * (*(vetor + i) - *media);
    }
    *desvio = sqrt(somatoria/quantidade);
}
int main()
{
    int quantalunos;
    float media, desvio;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantalunos);
    float *vetor = (float *) malloc (quantalunos * sizeof(float));
    for(int i = 0; i < quantalunos; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", (vetor +i));
    }
    mediaDesvio(vetor, quantalunos, &media, &desvio);
    printf("\nA media das notas dos alunos eh igual a: %.2f\n", media);
    printf("\nO desvio das notas dos alunos eh igual a: %.2f", desvio);
    return 0;
}
