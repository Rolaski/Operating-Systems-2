#include <stdio.h>
#include <math.h>

int liczbaCyfr(int n) {
    // Obsługuje przypadek n = 0
    if (n == 0) {
        return 1;
    }
    // Użycie log10 do obliczenia liczby cyfr
    return (int)log10(abs(n)) + 1;
}

int main() {
    FILE *file;
    int liczba;

    // Otwieranie pliku do odczytu
    file = fopen("liczba.txt", "r");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    // Odczyt i przetwarzanie liczb z pliku
    while (fscanf(file, "%d", &liczba) == 1) {
        int cyfry = liczbaCyfr(liczba);
        printf("Liczba: %d, Liczba cyfr: %d\n", liczba, cyfry);
    }

    // Zamknięcie pliku
    fclose(file);
    return 0;
}
