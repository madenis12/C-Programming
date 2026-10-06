#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Entrez deux entiers et un operateur (+, -, *, /) : ");
    scanf("%d %d %c", &a, &b, &op);

    if (op == '+') {
        printf("Resultat : %d\n", a + b);
    } else if (op == '-') {
        printf("Resultat : %d\n", a - b);
    } else if (op == '*') {
        printf("Resultat : %d\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("Resultat : %d\n", a / b);
        } else {
            printf("Erreur : division par zero\n");
        }
    } else {
        printf("Operateur invalide\n");
    }

    return 0;
}