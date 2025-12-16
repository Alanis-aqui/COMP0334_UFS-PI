#include <stdio.h>

int main() {
    float salario = 3500, inss = 11, ir = 7.5;
    float desc_inss = salario * inss/100, desc_ir = salario * ir/100, liquido = salario - desc_inss - desc_ir;
    printf("Folha de pagamento de João\n\nSalário Bruto: R$ %.2f\nDesconto INSS: %.0f%%\nDesconto Imposto de Renda: %.0f%%\n", salario, inss, ir);
    printf("Valor do INSS descontado: R$ %.2f\nValor do Imposto de Renda descontado: R$ %.2f\nSalário Líquido: R$ %.2f\n", desc_inss, desc_ir, liquido);
    return 0;
}