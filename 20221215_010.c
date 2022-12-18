#include <stdio.h>

int main(){
    float h;
    printf("Digite sua altura(metros): ");
    scanf("%f", &h);

    printf("\nSeu peso ideal = %.2f\n", (72.7*h)-58);

    system("pause");
    return 0;
}
