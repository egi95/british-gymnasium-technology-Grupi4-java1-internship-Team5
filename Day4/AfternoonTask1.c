#include <stdio.h>

int main() {
    // ------------------------------
    // FOR loop: Përdoret kur dihet numri i saktë i përsëritjeve
    // Këtu: nga 1 në 10
    // ------------------------------
    printf("Numrat nga 1 në 10 (for loop):\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // ------------------------------
    // WHILE loop: Përdoret kur përsëritja ndalet nga një kusht logjik
    // Këtu: derisa numri është më i vogël ose i barabartë me 20
    // ------------------------------
    printf("Numrat çift nga 2 në 20 (while loop):\n");
    int num = 2;
    while (num <= 20) {
        printf("%d ", num);
        num += 2;
    }
    printf("\n\n");

    // ------------------------------
    // DO-WHILE loop: E garanton që blloku ekzekutohet të paktën një herë
    // Këtu: Printon "Hello, world!" saktësisht 5 herë
    // ------------------------------
    printf("Persëritja e tekstit me do-while loop:\n");
    int count = 1;
    do {
        printf("Hello, world! (%d)\n", count);
        count++;
    } while (count <= 5);

    return 0;
}
