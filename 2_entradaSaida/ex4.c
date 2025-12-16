#include <stdio.h>

int main() {
    float peso = 70, altura = 1.75, imc = peso / (altura * altura);
    printf("IMC de João: %.2f kg/m^2\n", imc);
    return 0;
}