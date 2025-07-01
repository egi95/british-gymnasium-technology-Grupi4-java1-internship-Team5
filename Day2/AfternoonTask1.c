#include <stdio.h>  // Përdoret për funksionin printf

int main() {
    int mosha = 20;           // Variabla për moshën
    float gjatesia = 1.75;    // Variabla për gjatësinë në metra

    // Shtyp të dhënat në ekran
    printf("Mosha: %d vjeç\n", mosha);          // %d për integer
    printf("Gjatësia: %.2f metra\n", gjatesia); // %.2f për float me 2 shifra pas presjes

    return 0;  // Fundi i programit
}

//Detyra e 2
#include <stdio.h>

int main() {
    int mosha = 25;           // Variabla për moshën
    float gjatesia = 1.8345;  // Variabla për gjatësinë

    // Shtyp moshën dhe gjatësinë me 2 shifra pas presjes
    printf("Mosha: %d vjeç\n", mosha);           
    printf("Gjatësia: %.2f metra\n", gjatesia);  // %.2f tregon 2 shifra pas presjes

    return 0;
}

//Detyra e 3 
për numra të plotë (integers)
Përdoret për të shtypur ose lexuar një int.
për numra dhjetorë (float/double)
Përdoret për të shtypur ose lexuar një float ose double.

//Detyra e 4 
Nëse përdorim %d për një float në funksionin printf() në gjuhën C, rezultati është i pasaktë dhe sjellja është e papërcaktuar (undefined behavior). Ja një shembull me koment shpjegues:


