#include <stdio.h>

int main(){
    int idade;
    float peso;
    printf("Insira a sua idade e o seu peso.\n");
    printf("Idade: \n");
    scanf("%d", &idade);
    printf("Peso: \n");
    scanf("%f", &peso);
    printf("Chamo-me Daniel tenho %d anos e peso %.2f KG.\n", idade, peso);
}