#include <stdio.h>
#include <ctype.h>

int countWords2(FILE *fp)
{
    int words = 0;
    char ch, prev = ' ';

    while ((ch = fgetc(fp)) != EOF)
    {
        if (!isspace(ch) && isspace(prev))
        {
            words++;
        }
        prev = ch;
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

    int wordCount = countWords2(fp);
    printf("Liczba slow (countWords2): %d\n", wordCount);

    fclose(fp);
    return 0;
}
