#include <stdio.h>

main() {
//Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 


    float nota1, nota2, nota3;
    float media;

    printf("Nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Nota da terceira prova: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3 * 2) / 4;

    printf("Média do aluno: %.2f\n", media);

    if (media >= 7.0) {
        printf("Parabéns! Você está aprovado!\n");
    } else {
        printf("Estude mais na próxima! Você reprovado.\n");
    }

}
