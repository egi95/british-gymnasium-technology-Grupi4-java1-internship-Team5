#include <stdio.h>

int main() {
    // Pjesa 1: Përdorimi i for loop për të printuar numrat nga 1 në 10
    // For është ideal kur dimë saktësisht sa herë duhet të përsërisim (10 herë).
    printf("Numrat nga 1 deri në 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n\n");

    // Pjesa 2: Përdorimi i while loop për të printuar numrat çift nga 2 deri në 20
    // While është i mirë për përsëritje derisa të arrihet një kusht specifik.
    printf("Numrat çift nga 2 deri në 20:\n");
    int j = 2;
    while (j <= 20) {
        printf("%d ", j);
        j += 2;
    }

    printf("\n\n");

    // Pjesa 3: Përdorimi i do-while loop për të printuar "Hello, world!" 5 herë
    // Do-while garanton që kodi ekzekutohet të paktën një herë.
    printf("Printimi i 'Hello, world!' 5 herë:\n");
    int k = 1;
    do {
        printf("Hello, world! (%d)\n", k);
        k++;
    } while (k <= 5);

    return 0;
}

//From 14:00

#include <stdio.h>

int main() {
    int numbers[10]; // Deklarimi i një array prej 10 elementësh për të ruajtur numrat
    int sum = 0;     // Do na duhet për të llogaritur mesataren
    float average;

    // Leximi i 10 numrave nga përdoruesi dhe ruajtja në array
    printf("Shkruani 10 numra:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numri %d: ", i + 1);
        scanf("%d", &numbers[i]); // Lexon dhe ruan numrin në pozicionin përkatës
        sum += numbers[i];        // Shton vlerën në total për mesatare
    }

    // Llogaritja e mesatares
    average = (float)sum / 10;
    printf("\nMesatarja: %.2f\n", average);

    // Printimi i numrave në rend të kundërt
    printf("\nNumrat në rend të kundërt:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    // Shfaqja e numrave më të mëdhenj se mesatarja
    printf("\n\nNumrat më të mëdhenj se mesatarja:\n");
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > average) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");

    return 0;
}

