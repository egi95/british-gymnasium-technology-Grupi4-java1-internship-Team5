#include <stdio.h>

int main() {
    // Deklarim dhe inicializim i një variabli të tipit char
    char shkronja = 'A';

    // Deklarim dhe inicializim i një variabli të tipit int
    int mosha = 25;

    // Deklarim dhe inicializim i një variabli të tipit float
    float gjatesia = 1.75f;

    // Deklarim dhe inicializim i një variabli të tipit double
    double pesha = 68.345;

    // Shtypja e vlerave me formatin e duhur
    printf("Shkronja: %c\n", shkronja);         // %c për char
    printf("Mosha: %d\n", mosha);               // %d për int
    printf("Gjatësia: %.2f metra\n", gjatesia); // %.2f për float me 2 shifra pas presjes
    printf("Pesha: %.3lf kg\n", pesha);         // %.3lf për double me 3 shifra pas presjes

    return 0;
}

//Detyra 2 
#include <stdio.h>

int main() {
    // Printon madhësinë në bajte të tipit char
    printf("Madhësia e char: %zu bajte\n", sizeof(char));

    // Printon madhësinë në bajte të tipit int
    printf("Madhësia e int: %zu bajte\n", sizeof(int));

    // Printon madhësinë në bajte të tipit float
    printf("Madhësia e float: %zu bajte\n", sizeof(float));

    // Printon madhësinë në bajte të tipit double
    printf("Madhësia e double: %zu bajte\n", sizeof(double));

    // Printon madhësinë në bajte të tipit long
    printf("Madhësia e long: %zu bajte\n", sizeof(long));

    // Printon madhësinë në bajte të tipit short
    printf("Madhësia e short: %zu bajte\n", sizeof(short));

    return 0;
    
    //Detyra e 3 
    Madhësia e char: 1 bajte
Madhësia e int: 4 bajte
Madhësia e float: 4 bajte
Madhësia e double: 8 bajte
Madhësia e long: 8 bajte
Madhësia e short: 2 bajte




}

