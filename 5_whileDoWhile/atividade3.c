#include <stdio.h>

void avaliar() {
    float n1,n2,n3,n4;
    char aluno[50];
    char *res = "Reprovado";

    printf("Qual o nome do aluno?\nNome: ");
    scanf("%s", &aluno);
    printf("Digite as notas a seguir\n");
    printf("Nota 1: "); scanf("%f", &n1);
    printf("Nota 2: "); scanf("%f", &n2);
    printf("Nota 3: "); scanf("%f", &n3);
    
    float soma = n1 + n2 + n3;
    float media = soma/3;
    
    if (media >= 3 && media < 7) {
        printf("Nota 4: "); scanf("%f", &n4);
        media = (soma + n4)/4;
        if (media >= 5)
            res = "Aprovado";
    }
    else if (media >= 7)
        res = "Aprovado";
    printf("\nAluno: %s\nMédia: %.2f\nSituação: %s\n", aluno, media, res);
}

int main() {
    char opcao;
    printf("Bem-vindo(a) ao avaliador!\n");
    do {
        avaliar();
        printf("Deseja verificar a situação de outro aluno?\n(Responda 'N' para encerrar o programa)\n");
        printf("Resposta: "); scanf(" %c", &opcao);
    } while (opcao != 'n' && opcao != 'N');
    return 0;
}