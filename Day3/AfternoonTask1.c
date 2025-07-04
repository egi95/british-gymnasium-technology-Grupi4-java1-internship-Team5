#include <stdio.h>

int main() {
    // Deklarojmë një variabël të tipit int për moshën
    int mosha = 20;

    // Deklarojmë një variabël të tipit float për gjatësinë
    float gjatesia = 1.75;

    // Shtypim moshën duke përdorur %d, që përdoret për numra të plotë (int)
    printf("Mosha ime: %d vjeç\n", mosha);

    // Shtypim gjatësinë duke përdorur %.2f që jep dy shifra pas presjes dhjetore
    // %f përdoret për float/double
    printf("Gjatësia ime: %.2f metra\n", gjatesia);

    // Koment: Nëse përdorim %d për një float si gjatesia, do të marrim një rezultat të pasaktë
    // ose do të ndodhë sjellje e paparashikueshme (undefined behavior), sepse %d pret një int
    // shembull: printf("%d", gjatesia);  <-- Gabim logjik (dhe ndonjëherë edhe teknik)
    
    return 0;
}
		




