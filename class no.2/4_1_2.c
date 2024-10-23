#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *trim(char *s) 
{
    if (s == NULL || *s == '\0') 
    {
        printf("AMIGO BEZ TAKICH!\n");
    }

    // wskaznik do pierwszej litery
    while (isspace((unsigned char)*s)) 
    {
        s++;
    }


    //wskaznik od konca
    char *end = s + strlen(s) - 1;
    while (end > s && isspace((unsigned char)*end)) 
    {
        end--;
    }

    //dodam znak do konca lancucha
    *(end + 1) = '\0';

    return s;
}

int main() {
    char tekst[] = "   Ala ma kota, kot ma ale, kot ma psa   ";
    printf("Tekst: '%s'\n", trim(tekst)); 
    return 0;
}
