#include <stdio.h>

int main() {
    int mosha;       // Variabla për të ruajtur një numër të plotë
    float gjatesia;  // Variabla për të ruajtur një numër me presje

    // Mesazh për përdoruesin që tregon çfarë të fusë
    printf("Mosha:17 ");
    // Lexon një vlerë int nga përdoruesi dhe e ruan në variablën 'mosha'
    scanf("%d", &mosha);  // '&' tregon adresën e variablës ku të ruhet vlera

    printf("Gjatesia: 1.75");
    // Lexon një vlerë float nga përdoruesi dhe e ruan në variablën 'gjatesia'
    scanf("%f", &gjatesia);

    // Shfaq të dhënat e futura në mënyrë të formatuar
    printf("\n📋 Rezultatet:\n");
    printf("Mosha: %d vjeç\n", mosha);                      // %d për int
    printf("Gjatësia: %.2f metra\n", gjatesia);             // %.2f për float me 2 shifra pas presjes

    return 0;
