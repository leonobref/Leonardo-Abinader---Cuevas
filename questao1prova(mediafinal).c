#include <stdio.h>

int main()
{
    float media, mediamaior, mediamenor, soma = 0, cont = 1;
    printf("Digite a media final de um aluno: ");
    scanf("%f", &media);
    mediamaior = mediamenor = media;
    soma = media;
    if(media >= 0){
        while(media >= 0){
            printf("Digite a media final de um aluno: ");
            scanf("%f", &media);
            if(media > mediamaior && media > 0)
            mediamaior = media;
            else if(media < mediamenor && media > 0)
            mediamenor = media;
            if (media > 0){
            soma += media;
            cont += 1;
            }
        }
        printf("\nO programa parou porque foi digitado uma media negativa");
        printf("\nA maior media final foi: %.1f", mediamaior);
        printf("\nA menor media final foi: %.1f", mediamenor);
        printf("\nA media aritmetica simples da turma foi: %.1f", soma / cont);
    }
    else
    printf("\nO programa parou porque foi digitado uma media negativa");
    return 0;
}
