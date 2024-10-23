#include <stdio.h>

void printHex(FILE *fp)
{
    unsigned char ch;
    while (fread(&ch, sizeof(char), 1, fp))
    {
        printf("%02x ", ch);
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

    printHex(fp);
    fclose(fp);

    return 0;
}
