#include <stdio.h>

int main() {
    // Deklarimi dhe inicializimi i variablave
    char c = 'A';          // Karakter i vetëm
    int i = 100;           // Numër i plotë
    float f = 3.14f;       // Numër me presje lëvizëse (single precision)
    double d = 3.14159265; // Numër me presje lëvizëse (double precision)

    // Shtypja e vlerave të variablave
    printf("Char: %c\n", c);
    printf("Int: %d\n", i);
    printf("Float: %.2f\n", f);   // Me 2 shifra pas presjes
    printf("Double: %.8lf\n", d); // Me 8 shifra pas presjes

    // Shtypja e madhësive në bajte për secilin lloj të të dhënave
    printf("Madhësia e char: %zu bajtë\n", sizeof(c));
    printf("Madhësia e int: %zu bajtë\n", sizeof(i));
    printf("Madhësia e float: %zu bajtë\n", sizeof(f));
    printf("Madhësia e double: %zu bajtë\n", sizeof(d));

    

    return 0;
}
