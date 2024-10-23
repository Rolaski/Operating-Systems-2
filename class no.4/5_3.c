#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printWords(FILE *fp)
{
    char buffer[1024];

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        //stroke dzieli se tutaj linie na slowa
        char *word = strtok(buffer, " \t\n");

        //iteracja po slowach, do dzisiaj nie wiem co to iteracja ale wiem ze dla petli
        while (word != NULL)
        {
            printf("%s\n", word);
            word = strtok(NULL, " \t\n");
        }
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

    printWords(fp);

    fclose(fp);
    return 0;
}
