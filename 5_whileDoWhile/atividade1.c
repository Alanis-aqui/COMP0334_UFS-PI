#include <stdio.h>

void ValidaCompra(float *L) {
    float D;
    static int i = 1;

    printf("Debito: ");
    scanf("%f",&D);
    printf("Compra #%i\n", i);
    if (*L - D >= 0) {
        printf("Compra possivel! \n");
        *L = *L - D;
        i++;
    }
    else
        printf("Compra ""estourarah"" o cartao! \n");
        printf("Limite restante: %.2f \n\n",*L);
    }

int main() {
    float Limite;
    
    printf("Limite do cartao: ");
    printf("\n");
    scanf("%f",&Limite);
    while (Limite>0)
        ValidaCompra(&Limite);
    printf("Seu limite de compras acabou!");
    return 0;
}