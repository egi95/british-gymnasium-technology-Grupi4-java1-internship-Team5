#include <stdio.h>   // Për funksionin printf()

int main() {
    int mosha = 16;              // Deklarojmë _mosha_ si int dhe e inicializojmë me 25
    float gjatesia = 1.78f;      // Deklarojmë _gjatesia_ si float dhe e inicializojmë me 1.78

    // Shtypim moshën me %d, format i përshtatshëm për int
    printf("Mosha ime është %d vjet\n", mosha);

    // Shtypim gjatësinë me %f, format për float, me 2 shifra pas presjes: .2f
    printf("Gjatësia ime është %.2f metra\n", gjatesia);

    return 0;

}

/*printf("Gjatësia ime është %d metra\n", gjatesia);
atëherë printf do të interpretojë bitët e variablës gjatesia si një int, 
si të ishin një numër i plotë. Kjo shkakton sjellje të papërcaktuar: 
do të shfaqë ndonjë numër çuditshëm ose simbol gabimi, 
sepse formati i dhënë nuk i përkon të dhënës që ju po kaloni.
*/
