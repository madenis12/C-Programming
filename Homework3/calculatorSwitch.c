#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Entrez deux entiers et un operateur (+, -, *, /) : ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("Resultat : %d\n", a + b);
            break;
        case '-':
            printf("Resultat : %d\n", a - b);
            break;
        case '*':
            printf("Resultat : %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Resultat : %d\n", a / b);
            else
                printf("Erreur : division par zero\n");
            break;
        default:
            printf("Operateur invalide\n");
    }

    return 0;
}