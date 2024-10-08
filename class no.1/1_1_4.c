#include <stdio.h>

int main() {
    char napis[50]; 

    printf("Podaj napis: ");
    fgets(napis, sizeof(napis), stdin); 

    printf("Podany napis to: %s", napis);

    return 0;
}
