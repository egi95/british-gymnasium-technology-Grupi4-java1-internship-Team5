#include <stdio.h>

int main() {
    int numbers[10];  // Array për të ruajtur 10 numra të plotë
    int sum = 0;      // Për të llogaritur shumën
    float average;    // Për të ruajtur mesataren

    // ------------------------------
    // LEXIMI I 10 NUMRAVE NGA PËRDORUESI
    // ------------------------------
    printf("Shkruani 10 numra:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numri %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];  // Shto numrin në total
    }

    // ------------------------------
    // LLOGARITJA E MESATARES
    // ------------------------------
    average = sum / 10.0;  // Përdorim 10.0 për të marrë rezultat float
    printf("\nMesatarja = %.2f\n", average);

    // ------------------------------
    // SHTYPJA E ELEMENTEVE NË REND TË KUNDËRT
    // ------------------------------
    printf("\nNumrat në rend të kundërt:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    // ------------------------------
    // SHTYPJA E ELEMENTEVE MË TË MËDHENJ SE MESATARJA
    // ------------------------------
    printf("\n\nNumrat më të mëdhenj se mesatarja:\n");
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > average) {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}
