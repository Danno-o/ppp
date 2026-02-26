#include <stdio.h>
#include <math.h>
const float pi = 3.14159;

int main(){
    int ang, min, sec;
    float graus_sum, graus_rad;
    printf("Introduza o ângulo, minutos e segundos: ");
    scanf("%d %d %d", &ang, &min, &sec);
    ang = ang % 360;
    if (ang < 0){
        ang = ang + 360;
    }
    graus_sum = ang + (min/60.0) + (sec/3600.0);
    graus_rad = graus_sum * (pi/180.0);
    printf("Em radianos é %f.\n", graus_rad);
    return 0;
}