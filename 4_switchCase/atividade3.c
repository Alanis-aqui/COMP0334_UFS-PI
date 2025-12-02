#include <stdio.h>

#define TAMANHO_TANQUE 60.0 

float custoViagem(float litros, float preco) {
    return litros * preco;
}

float consumoMedio(float distancia, float litros) {
    return distancia / litros;
}

float autonomia(float consumo) {
    return TAMANHO_TANQUE * consumo;
}

float custoPorKm(float custoTotal, float distancia) {
    return custoTotal / distancia;
}

int main() {
    float v1, v2, resultado;
    char opcao;

    printf("=== Sistema BusTour ===\n");
    printf("Informe o primeiro valor: ");
    scanf("%f", &v1);

    printf("Informe o segundo valor: ");
    scanf("%f", &v2);

    printf("\nEscolha a operacao:\n");
    printf("C - Custo da viagem (litros * preco)\n");
    printf("M - Consumo medio (distancia / litros)\n");
    printf("A - Autonomia estimada (tanque * consumo)\n");
    printf("Q - Custo por km (custo total / distancia)\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);

    switch(opcao) {
        case 'C':
        case 'c':
            resultado = custoViagem(v1, v2);
            printf("\nCusto total da viagem: R$ %.2f\n", resultado);
            break;

        case 'M':
        case 'm':
            resultado = consumoMedio(v1, v2);
            printf("\nConsumo medio: %.2f km/l\n", resultado);
            break;

        case 'A':
        case 'a':
            resultado = autonomia(v1);
            printf("\nAutonomia estimada: %.2f km\n", resultado);
            break;

        case 'Q':
        case 'q':
            resultado = custoPorKm(v1, v2);
            printf("\nCusto por quilometro: R$ %.2f\n", resultado);
            break;

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
