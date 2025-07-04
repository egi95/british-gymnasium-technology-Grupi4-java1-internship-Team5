#include <stdio.h>

int main() {
    int numbers[5];       // Array për të ruajtur 5 numra
    int i;                // Përdoret për iterim
    int max, sum = 0;     // max: numri më i madh, sum: shuma

    // --------------------------------------------------
    // FOR LOOP – Leximi dhe shtypja në të njëjtën linjë
    // Përdorim for sepse dimë saktësisht 5 përsëritje
    // --------------------------------------------------
    printf("Fut 5 numra të plotë:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Numrat e futur janë:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // --------------------------------------------------
    // WHILE LOOP – Për të gjetur numrin më të madh
    // Përdorim while kur kushti kontrollohet para çdo iterimi
    // dhe ndalim kur indeksi kalon madhësinë e array
    // --------------------------------------------------
    i = 1;
    max = numbers[0];  // Nisim me vlerën e parë
    while (i < 5) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        i++;
    }
    printf("Numri më i madh: %d\n", max);

    // --------------------------------------------------
    // DO-WHILE LOOP – Për të llogaritur shumën
    // Ky lloj loop-i përdoret kur duam të sigurohemi
    // që blloku të ekzekutohet të paktën një herë
    // --------------------------------------------------
    i = 0;
    do {
        sum += numbers[i];
        i++;
    } while (i < 5);

    printf("Shuma e numrave: %d\n", sum);

    return 0;
}
