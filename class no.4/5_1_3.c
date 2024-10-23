#include <stdio.h>

void copy(const char *addr1, const char *addr2)
{
    FILE *source = fopen(addr1, "r");
    if (source == NULL)
    {
        printf("Nie udalo sie otworzyc pliku zrodlowego: %s\n", addr1);
        return;
    }

    FILE *destination = fopen(addr2, "w");
    if (destination == NULL)
    {
        printf("Nie udalo sie otworzyc pliku docelowego: %s\n", addr2);
        fclose(source);
        return;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("Kopiowanie zakonczone.\n");

    fclose(source);
    fclose(destination);
}

int main()
{
    const char *sourcePath = "D:/Github things/Operating-Systems-2/class no.4/text.txt";
    const char *destinationPath = "D:/Github things/Operating-Systems-2/class no.4/destination.txt";

    copy(sourcePath, destinationPath);

    return 0;
}
