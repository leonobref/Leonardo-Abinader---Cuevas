#include <stdio.h>

int main(){
    float n1 , n2 , n3 , maiorn1, maiorn2, maiorn3, menorn1, menorn2, menorn3, media, maiormedia, menormedia;
    char sn;
    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3;
    maiorn1 = n1;
    menorn1 = n1;
    maiorn2 = n2;
    menorn2 = n2;
    maiorn3 = n3;
    menorn3 = n3;
    maiormedia = media;
    menormedia = media;
    printf("\nDeseja inserir as notas de outro alunos (s/n)?: ");
    scanf(" %c", &sn);
    if (sn == 's'){
        for(;;){
            printf("Digite as tres notas do aluno: ");
            scanf("%f %f %f", &n1, &n2, &n3);
            media = (n1 + n2 + n3)/3;
            if(media > maiormedia)
            maiormedia = media;
            if(media < menormedia)
            menormedia = media;

            if(n1 > maiorn1)
            maiorn1 = n1;
            if(n1 < menorn1)
            menorn1 = n1;

            if(n2 > maiorn2)
            maiorn2 = n2;
            if(n2 < menorn2)
            menorn2 = n2;

            if(n3 > maiorn3)
            maiorn3 = n3;
            if(n3 < menorn3)
            menorn3 = n3;

            printf("\nDeseja inserir as notas de outro alunos (s/n)?: ");
            scanf(" %c", &sn);
            if (sn != 's')
            {
                printf("\nMaior nota do primeiro exercicio: %.1f", maiorn1);
                printf("\nMenor nota do primeiro exercicio: %.1f", menorn1);
                printf("\nMaior nota do segundo exercicio: %.1f", maiorn2);
                printf("\nMenor nota do segundo exercicio: %.1f", menorn2);
                printf("\nMaior nota do terceiro exercicio: %.1f", maiorn3);
                printf("\nMenor nota do terceiro exercicio: %.1f", menorn3);
                printf("\nMaior media: %.1f", maiormedia);
                printf("\nMenor media: %.1f", menormedia);
                break;
            }
        }
    }
    else{
        printf("\nMaior nota do primeiro exercicio: %.1f", maiorn1);
        printf("\nMenor nota do primeiro exercicio: %.1f", menorn1);
        printf("\nMaior nota do segundo exercicio: %.1f", maiorn2);
        printf("\nMenor nota do segundo exercicio: %.1f", menorn2);
        printf("\nMaior nota do terceiro exercicio: %.1f", maiorn3);
        printf("\nMenor nota do terceiro exercicio: %.1f", menorn3);
        printf("\nMaior media: %.1f", maiormedia);
        printf("\nMenor media: %.1f", menormedia);
    }
    return 0;
}
