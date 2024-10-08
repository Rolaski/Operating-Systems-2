public class 2_4 {

    // Mamy trójwymiarową tablicę, gdzie:
    // 1. Pierwszy wymiar - węzły
    // 2. Drugi wymiar - dzieci danego węzła
    // 3. Trzeci wymiar - typ i nazwa
    static String[][][] drzewo;

    // Rozmiary drzewa
    static final int ILOSC_WEZLOW = 6; // Liczba węzłów
    static final int MAX_DZIECI = 3;    // Maksymalna liczba dzieci
    static final int TYP = 2;           // 0 - typ (katalog/plik), 1 - nazwa

    public static void main(String[] args) {
        // Inicjalizacja drzewa
        drzewo = new String[ILOSC_WEZLOW][MAX_DZIECI][TYP];

        // Katalog A
        drzewo[0][0][0] = "Katalog"; // Typ
        drzewo[0][0][1] = "A";      // Nazwa
        drzewo[0][1][0] = "Katalog"; // Typ
        drzewo[0][1][1] = "B";      // Nazwa
        drzewo[0][2][0] = "Katalog"; // Typ
        drzewo[0][2][1] = "C";      // Nazwa
        drzewo[0][0][0] = "Katalog"; // Typ
        drzewo[0][1][0] = "Katalog"; // Typ
        drzewo[0][2][0] = "Plik";    // Typ
        drzewo[0][1][1] = "D";       // Nazwa
        drzewo[0][2][1] = "E";       // Nazwa

        // Katalog B
        drzewo[1][0][0] = "Katalog"; // Typ
        drzewo[1][0][1] = "B";       // Nazwa
        drzewo[1][0][0] = "Plik";    // Typ
        drzewo[1][0][1] = "D";       // Nazwa

        // Katalog C
        drzewo[2][0][0] = "Katalog"; // Typ
        drzewo[2][0][1] = "C";       // Nazwa
        drzewo[2][0][0] = "Plik";    // Typ
        drzewo[2][0][1] = "E";       // Nazwa

        // Katalog X
        drzewo[3][0][0] = "Katalog"; // Typ
        drzewo[3][0][1] = "X";       // Nazwa
        drzewo[3][1][0] = "Katalog"; // Typ
        drzewo[3][1][1] = "Y";       // Nazwa
        drzewo[3][2][0] = "Katalog"; // Typ
        drzewo[3][2][1] = "Z";       // Nazwa
        drzewo[3][0][0] = "Plik";    // Typ
        drzewo[3][0][1] = "f1";      // Nazwa

        // Wywołanie funkcji do wyświetlenia drzew
        wyswietlDrzewo();
    }

    // Metoda do wyświetlania drzewa
    public static void wyswietlDrzewo() {
        for (int i = 0; i < drzewo.length; i++) {
            for (int j = 0; j < MAX_DZIECI; j++) {
                if (drzewo[i][j][0] != null) { // Jeśli węzeł istnieje
                    System.out.println(drzewo[i][j][0] + ": " + drzewo[i][j][1]);
                }
            }
        }
    }
}
