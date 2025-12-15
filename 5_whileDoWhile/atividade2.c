// JK faz vaquinha para proteção animal

#include <stdio.h>

int main() {
    float meta, doacao, soma = 0;
    printf("Meta da vaquinha: ");
    scanf("%f", &meta);
    do {
        printf("Valor da doação: ");
        scanf("%f", &doacao);
        soma += doacao;
        printf("Valor parcial arrecadado: %.2f\n", soma);
    } while (soma < meta);
    if (soma > meta) {
        float diff = soma - meta;
        printf("A meta da vaquinha foi ultrapassada em R$%.2f\n", diff);
    }
    printf("A meta da vaquinha foi alcançada!\n");
    return 0;
}