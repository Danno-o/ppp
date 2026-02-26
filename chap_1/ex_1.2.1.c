#include <stdio.h>

int main(){
    float troco;
    int troco_cent, quant;

    
    printf("Introduza o troco a ser devolvido: ");
    scanf("%f", &troco);
    troco_cent = troco * 100;
    printf("O troco é:\n");

    quant = troco_cent / 5000;
    if (quant > 0){
        printf("%d notas de 50€\n", quant);
        troco_cent = troco_cent % 5000;
    }
    quant = troco_cent / 2000;
    if (quant > 0){
        printf("%d notas de 20€\n", quant);
        troco_cent = troco_cent % 2000;
    }
    quant = troco_cent / 1000;
    if (quant > 0){
        printf("%d notas de 10€\n", quant);
        troco_cent = troco_cent % 1000;
    }
    quant = troco_cent / 500;
    if (quant > 0){
        printf("%d notas de 5€\n", quant);
        troco_cent = troco_cent % 500;
    }
    quant = troco_cent / 200;
    if (quant > 0){
        printf("%d moedas de 2€\n", quant);
        troco_cent = troco_cent % 200;
    }
    quant = troco_cent / 100;
    if (quant > 0){
        printf("%d moedas de 1€\n", quant);
        troco_cent = troco_cent % 100;
    }
    quant = troco_cent / 50;
    if (quant > 0){
        printf("%d moedas de 0.50€\n", quant);
        troco_cent = troco_cent % 50;
    }
    quant = troco_cent / 20;
    if (quant > 0){
        printf("%d moedas de 0.20€\n", quant);
        troco_cent = troco_cent % 20;
    }
    quant = troco_cent / 10;
    if (quant > 0){
        printf("%d moedas de 0.10€\n", quant);
        troco_cent = troco_cent % 10;
    }
    quant = troco_cent / 5;
    if (quant > 0){
        printf("%d moedas de 0.05€\n", quant);
        troco_cent = troco_cent % 5;
    }
    quant = troco_cent / 2;
    if (quant > 0){
        printf("%d moedas de 0.02€\n", quant);
        troco_cent = troco_cent % 2;
    }
    if (quant > 0){
        printf("%d moedas de 0.01€\n", quant);
        troco_cent = troco_cent % 1;
    }

    return 0;
}