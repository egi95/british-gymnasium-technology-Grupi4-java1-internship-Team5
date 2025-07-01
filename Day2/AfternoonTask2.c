#include <stdio.h>

int main() {
    // Deklarim dhe inicializim i variablave të tipeve të ndryshme
    char shkronje = 'A';         // karakter i vetëm
    int mosha = 25;              // numër i plotë
    float nota = 8.75f;          // numër me presje dhjetore (float)
    double temperatura = 36.789; // numër me precizion më të lartë (double)

    // Shtyp vlerat duke përdorur formatin e duhur për secilin tip
    printf("Shkronja: %c\n", shkronje);              // %c për char
    printf("Mosha: %d\n", mosha);                    // %d për int
    printf("Nota: %.2f\n", nota);                    // %.2f për float (2 shifra pas presjes)
    printf("Temperatura: %.3lf\n", temperatura);     // %.3lf për double (3 shifra pas presjes)

    // Shtyp madhësinë në byte të secilit tip duke përdorur sizeof()
    printf("\n--- Madhesite ne byte ---\n");
    printf("char: %lu byte\n", sizeof(shkronje));
    printf("int: %lu bytes\n", sizeof(mosha));
    printf("float: %lu bytes\n", sizeof(nota));
    printf("double: %lu bytes\n", sizeof(temperatura));

    return 0;
}
