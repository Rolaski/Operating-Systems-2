#include <stdio.h>

void printLines(FILE *fp)
{
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("%s", buffer);
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

    printLines(fp);

    fclose(fp);
    return 0;
}
