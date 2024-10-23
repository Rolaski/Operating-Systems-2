#include <stdio.h>
#include <ctype.h>

int countWords1(FILE *fp)
{
    int words = 0;
    int inside = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isspace(ch))
        {
            inside = 0;
        }
        else if (inside == 0)
        {
            inside = 1;
            words++;
        }
    }

    return words;
}

int main()
{
    FILE *fp = fopen("D:/Github things/Operating-Systems-2/class no.4/text.txt", "r");

    if (fp == NULL)
    {
        printf("Nie udalo sie otworzyc pliku.\n");
        return 1;
    }

    int wordCount = countWords1(fp);
    printf("Liczba slow (countWords1): %d\n", wordCount);

    fclose(fp);
    return 0;
}
