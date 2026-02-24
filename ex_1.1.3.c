#include <stdio.h>
#include <math.h>
const float pi = 3.14159;

int main(){
    float raio, altura, volume;
    printf("Introduza o raio: \n");
    scanf("%f", &raio);
    printf("Introduza a altura: \n");
    scanf("%f", &altura);
    
    // float raio_f = pow(raio, 2);
    volume = (pow(raio,2) * pi * altura);
    printf("O volume do cilindro é %.2f\n", volume);
    
    return 0;
}