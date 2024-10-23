#include <stdio.h>

void printChar(FILE *fp)
{
    unsigned char ch;
    while (fread(&ch, sizeof(char), 1, fp))
    {
        printf("'%c' ", (ch >= 32 && ch <= 126) ? ch : '.'); // Wypisuje znak lub kropkę dla znaków specjalnych
    }
    printf("\n");
}

int main()
{
    FILE *fp = fopen("D:/Github things/Operating-Systems-2/class no.4/text.txt", "rb");
    if (fp == NULL)
    {
        printf("Nie udalo sie otworzyc pliku.\n");
        return 1;
    }

    printChar(fp);
    fclose(fp);

    return 0;
}
