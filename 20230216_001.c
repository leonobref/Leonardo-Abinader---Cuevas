#include <stdio.h>
#include <string.h>

void retornamelhor(int tit, int t, char pos[t][100], float npos[t]){
    int i, j;
    float aux1;
    char aux2[100];
    for(i=0; i < t; i++)
    {   for(j=i + 1; j < t; j++){
        if (npos[j] > npos[i]){
            strcpy(aux2, pos[i]);
            strcpy(pos[i], pos[j]);
            strcpy(pos[j], aux2);
            aux1 = npos[i];
            npos[i] = npos[j];
            npos[j] = aux1;
        }
    }
    }
    for (i=0; i< tit; i++)
        puts(pos[i]);
}

int main()
{
    char goleiro[3][100]={"Caoimhin Kelleher", "Alisson Becker", "Adrian"};
    float ngoleiro[3]= {6,9,7};
    char defensores[7][100]={"Joe Gomez", "Virgil Van Dijk", "Ibrahim Konate", "Kostas Tsimikas", "Andy Robertson", "Joel Matip", "Trent Alexander-Arnold"};
    float ndefensores[7]={4,9,7.5,7,7.5,6,8};
    char meiocampo[8][100]={"Fabinho", "Thiago Alcantara", "Jordan Henderson", "Stefan Bajcetic", "Naby Keita", "Arthur Melo", "James Milner", "Harvey Elliot"};
    float nmeiocampo[8]={7,8.5,7.5,8,5,5,5.5,6};
    char atacantes[5][100]={"Roberto Firmino", "Mohamed Salah", "Cody Gakpo", "Dawin Nunez", "Luis Diaz"};
    float natacantes[5]={7.5,9.5,8,8.5,8.7};
    printf("Goleiro: \n");
    retornamelhor(1,3,goleiro,ngoleiro);
    printf("\n");
    printf("Defensores: \n");
    retornamelhor(4,7,defensores,ndefensores);
    printf("\n");
    printf("Meias: \n");
    retornamelhor(4,8,meiocampo,nmeiocampo);
    printf("\n");
    printf("Atacantes: \n");
    retornamelhor(2,5,atacantes,natacantes);
    printf("\n");
}
