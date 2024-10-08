#include <stdio.h>

int main() {
    char napis[50];  

    
    printf("Podaj napis: ");
    scanf("%[^\n]", napis);  
    printf("Podany napis to: %s\n", napis);

    return 0;
}
