#include <stdio.h>

int main() {
    int num_int;
    float num_float;

    // Njoftojmë përdoruesin çfarë duhet të fusë
    printf("Ju lutem, shkruani një numër të plotë (int): ");
    // lexojmë numrin e plotë nga tastiera
    // & përdoret për të dhënë adresën e variablës ku do të ruhet vlera e lexuar
    scanf("%d", &num_int);

    printf("Ju lutem, shkruani një numër me presje (float): ");
    // lexojmë numrin me presje lëvizëse
    scanf("%f", &num_float);

    // Shtypim të dhënat e futura me formatim të saktë
    printf("\nNumri i plotë i futur është: %d\n", num_int);
    printf("Numri me presje i futur është: %.2f\n", num_float);

    return 0;
}
