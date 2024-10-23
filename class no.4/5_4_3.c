#include <stdio.h>

void printLinesHex(FILE *fp)
{
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        for (char *ptr = buffer; *ptr != '\0'; ptr++)
        {
            printf("%02x ", (unsigned char)*ptr);
        }
        printf("\n");
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

    printLinesHex(fp);
    fclose(fp);

    return 0;
}
