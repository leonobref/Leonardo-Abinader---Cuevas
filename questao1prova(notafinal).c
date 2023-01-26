#include <stdio.h>

int main()
{
    float nota, notamaior, notamenor, media, soma = 0, cont = 1;
    printf("Digite a nota final de um aluno: ");
    scanf("%f", &nota);
    notamaior = notamenor = nota;
    soma = nota;
    if(nota >= 0){
        while(nota >= 0){
            printf("Digite a nota final de um aluno: ");
            scanf("%f", &nota);
            if(nota > notamaior && nota > 0)
            notamaior = nota;
            else if(nota < notamenor && nota > 0)
            notamenor = nota;
            if (nota > 0){
            soma += nota;
            cont += 1;
            }
        }
        printf("\nO programa parou porque foi digitado uma nota negativa");
        printf("\nA maior nota final foi: %.1f", notamaior);
        printf("\nA menor nota final foi: %.1f", notamenor);
        printf("\nA media aritmetica simples da turma foi: %.1f", soma / cont);
    }
    else
    printf("\nO programa parou porque foi digitado uma nota negativa");
    return 0;
}
