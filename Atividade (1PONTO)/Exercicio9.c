#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votos_nulos = 0, votos_em_branco = 0;

    printf("\nDigite o código: [do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar]");

    do {
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_em_branco++;
                break;
            case 0:
                break;
            default:
                printf("\nVoto inválido! Digite novamente.");
        }
    } while (voto != 0);

    printf("\nTotal de votos para o Candidato 1: %d", candidato1);
    printf("\nTotal de votos para o Candidato 2: %d", candidato2);
    printf("\nTotal de votos para o Candidato 3: %d", candidato3);
    printf("\nTotal de votos para o Candidato 4: %d", candidato4);
    printf("\nTotal de votos nulos: %d", votos_nulos);
    printf("\nTotal de votos em branco: %d", votos_em_branco);

    return 0;
}
