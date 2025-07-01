#include <stdio.h>
int main() {
    // Deklarojmë një variabël të tipit int për moshën
    int mosha = 17;

    // Deklarojmë një variabël të tipit float për gjatësinë në metra
    float gjatesia = 1.75;

    // Shfaqim moshën duke përdorur %d, sepse %d përdoret për numra të plotë (int)
    printf("Mosha: %d vjeç\n", mosha);

    // Shfaqim gjatësinë duke përdorur %.2f, sepse %f përdoret për float (numra me presje dhjetore)
    // dhe .2 tregon që duam 2 shifra pas presjes
    printf("Gjatesia: %.2f metra\n", gjatesia);

   
    // Nëse përdorim %d për një float, programi mund të shfaqë:
    // - vlerë të pasaktë ose të pavlefshme
    // - ose në disa raste: gabim gjatë ekzekutimit
    // Arsyeja është sepse %d është për int dhe nuk e përpunon dot float-in saktë.

    return 0;
}
