#include <stdio.h>

int main(){
    int a[8];
    int i;
    for(i=0;i<8;i++){
        printf("Elemento %d do array: ", i+1);
        scanf("%d", (a+i));
    }
    for (i=0; i<8; i++)
        printf("\nElemento %d do array eh %d e seu dobro eh %d.",i+1,*(a+i),*(a+i) * 2);
    printf("\n");  
    for(i=0;i<8;i++){
        if((*a+i)%2 == 0)
            printf("\nElemento %d do array eh %d e seu endereco eh %d.",i+1,*(a+i),a+i);
    }
    return 0;
}
