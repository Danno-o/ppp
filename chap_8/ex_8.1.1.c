/* print Fahrenheit-Celsius table; version with if */ #include<stdio.h>
int main(){
    float fahr, celsius, *f, *c;
    int lower, upper, step, *u, *s;
    // float fahr, celsius;
    // int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    u = &upper;
    s = &step;

    fahr = lower;
    f = &fahr;
    while (1){
        celsius = (5.0 / 9.0) * (*f - 32);
        c = &celsius;
        printf("%3.0f %6.1f\n", *f, *c);
        *f += *s;
        if (*f > *u) break;
    }
    return 0;
}