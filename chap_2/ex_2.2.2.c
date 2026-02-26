#include <stdio.h>
#include <stdlib.h>

int main(){
    int hora_am, min, hora_pm;
    printf("Introduza a hora: ");
    scanf("%d:%d", &hora_am, &min);
    if (hora_am > 24 || min > 59){
        printf("Hora introduzida é inválida!\n");
        return 0;
    }
    if (hora_am > 12){
        hora_pm = hora_am - 12;
        hora_pm = abs(hora_pm);
    }
    else{
        hora_pm = hora_am;
    }
    printf("A hora final é %d:%d.\n", hora_pm, min);
    return 0;
}