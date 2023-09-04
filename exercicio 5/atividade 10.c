#include <stdio.h>
#include <math.h>

int main() {
    //Calcule as raízes da equação de 2º grau.
    double a, b, c;
    double delta, raiz1, raiz2;

    printf("Digite o coeficiente 'a' (diferente de zero): ");
    scanf("%lf", &a);
    printf("Digite o coeficiente 'b': ");
    scanf("%lf", &b);
    printf("Digite o coeficiente 'c': ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
    } else {
        delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            printf("Não existe raiz real.\n");
        } else {
            raiz1 = (-b + sqrt(delta)) / (2 * a);
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            
            if (delta == 0) {
                printf("Raiz única: %.2lf\n", raiz1);
            } else {
                printf("Raiz 1: %.2lf\n", raiz1);
                printf("Raiz 2: %.2lf\n", raiz2);
            }
        }
    }

}
