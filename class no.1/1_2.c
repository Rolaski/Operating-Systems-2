#include <stdio.h>

int main() {
    int ch;

    ch = getchar();
    
    if (ch == EOF) {
        printf("Strumien wejsciowy jest pusty.\n");
    } 
    else if (ch == '\n') 
    {
        printf("Strumien wejsciowy jest pusty (tylko enter).\n");
    } 
    else 
    {
        printf("Strumien wejsciowyy nie jest pusty.\n");

        ungetc(ch, stdin);
    }

    return 0;
}
