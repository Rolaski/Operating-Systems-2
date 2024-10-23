#include <stdio.h>

void printChars(FILE * fp)
{
    char ch;
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
}

int main()
{
    FILE *fp = fopen("D:/Github things/Operating-Systems-2/class no.4/text.txt", "r");
    if (fp == NULL)
    {
        printf("Nie udalo sie otworzyc pliku.\n");
        return 1;
    }
    printChars(fp);
    fclose(fp);
    return 0;
}
