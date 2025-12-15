#include <stdio.h>
#include <string.h>

void candidatos() {
    printf("=============================================\n");
    printf("	SISTEMA DE VOTAÇÃO ELETRÔNICA\n");
    printf("=============================================\n\n");
    printf("CANDIDATOS:\n1 - Maria Oliveira\n2 - João Santos\n3 - Ana Costa\n");
    printf("4 - Pedro Oliveira\n5 - Voto Branco\n6 - Voto Nulo\n0 - Encerrar votação\n\n");
     printf("=============================================\n\n");
}

int urna(int opcao) {
    if (opcao == 0)
        return 0;
    return 1;
}

void notinha(int nEleitores, float vMaria, float vJoao, float vAna, float vPedro, float vB, float vN) {
    float inv = vB + vN;
    float val = nEleitores - inv;
    int tiraNulo = nEleitores - vN;
    printf("=============================================\n");
    printf("	RESULTADO DA ELEIÇÃO\n");
    printf("=============================================\n\n");
    printf("Total de eleitores:\n\nVOTOS POR CANDIDATO:\n");
    printf("1 - Maria Silva     : %.0f votos (%.2f%%)\n2 - João Santos     : %.0f votos (%.2f%%)\n", vMaria, (vMaria/tiraNulo)*100, vJoao, (vJoao/tiraNulo)*100);
    printf("3 - Ana Costa       : %.0f votos (%.2f%%)\n4 - Pedro Oliveira  : %.0f votos (%.2f%%)\n\n", vAna, (vAna/tiraNulo)*100, vPedro, (vPedro/tiraNulo)*100);
    printf("Votos brancos: %.0f (%.2f%%)\nVotos nulos:   %.0f (%.2f%%)\n\n", vB, (vB/nEleitores)*100, vN, (vN/nEleitores)*100);
    
    float maior = vMaria;
    char vencedor[30] = "Maria Silva";

    if (vJoao > maior) {
        maior = vJoao;
        strcpy(vencedor, "João Santos");
    }
    if (vAna > maior) {
        maior = vAna;
        strcpy(vencedor, "Ana Costa");
    }
    if (vPedro > maior) {
        maior = vPedro;
        strcpy(vencedor, "Pedro Oliveira");
    }

    printf("=============================================\n");
    printf("    VENCEDOR: %s com %.0f votos!\n", vencedor, maior);
    printf("=============================================\n\n");
    printf("Votos válidos:   %.0f (%.2f%%)\nVotos inválidos: %.0f (%.2f%%)\n\n", val, (val/nEleitores)*100, inv, (inv/nEleitores)*100);
    printf("=============================================\n");
}

int main() {
    int opcao, res;
    candidatos();
    do {
        printf("Resposta: ");
        scanf("%i", &opcao);
        res = urna(opcao);
    } while (res != 0);
    return 0;    
}