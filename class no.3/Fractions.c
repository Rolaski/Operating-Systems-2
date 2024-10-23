#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Fraction
{
    int num, den;
};

// Funkcja obliczająca NWD
int nwd(int a, int b)
{
    if (b == 0) return a;
    return nwd(b, a % b);
}

// Funkcja dodająca ułamki
struct Fraction sum(struct Fraction x, struct Fraction y)
{
    struct Fraction z;
    z.num = x.num * y.den + y.num * x.den;
    z.den = x.den * y.den;
    return z;
}

// Funkcja odejmująca ułamki
struct Fraction sub(struct Fraction x, struct Fraction y)
{
    struct Fraction z;
    z.num = x.num * y.den - y.num * x.den;
    z.den = x.den * y.den;
    return z;
}

// Funkcja mnożąca ułamki
struct Fraction mul(struct Fraction x, struct Fraction y)
{
    struct Fraction z;
    z.num = x.num * y.num;
    z.den = x.den * y.den;
    return z;
}

// Funkcja dzieląca ułamki
struct Fraction quo(struct Fraction x, struct Fraction y)
{
    struct Fraction z;
    z.num = x.num * y.den;
    z.den = x.den * y.num;
    return z;
}

// Funkcja sprawdzająca, czy napis jest liczbą całkowitą
int isNumber(const char *s)
{
    if (*s == '\0') return 0;
    if (*s == '-') s++;
    while (*s)
    {
        if (!isdigit(*s)) return 0;
        s++;
    }
    return 1;
}

// Funkcja usuwająca początkowe i końcowe białe znaki
char *trim(char *s)
{
    char *end;
    while (isspace((unsigned char)*s)) s++;
    if (*s == '\0') return s;
    end = s + strlen(s) - 1;
    while (end > s && isspace((unsigned char)*end)) end--;
    *(end + 1) = '\0';
    return s;
}

// Funkcja sprawdzająca, czy napis jest operatorem arytmetycznym
int getOperator(char *op, const char *s)
{
    s = trim((char *)s);
    if (strlen(s) == 1 && (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/' || s[0] == ':'))
    {
        *op = s[0];
        return 1;
    }
    return 0;
}

// Funkcja sprawdzająca, czy napis reprezentuje ułamek lub liczbę całkowitą
int getFraction(struct Fraction *x, const char *s)
{
    char *slash;
    char buffer[100];
    strncpy(buffer, s, sizeof(buffer));
    buffer[sizeof(buffer) - 1] = '\0';
    trim(buffer);
    slash = strchr(buffer, '/');

    if (slash)
    {
        *slash = '\0';
        if (isNumber(buffer) && isNumber(slash + 1))
        {
            x->num = atoi(buffer);
            x->den = atoi(slash + 1);
            if (x->den == 0) return 0; // Mianownik nie może być zerem
            return 1;
        }
    }
    else
    {
        if (isNumber(buffer))
        {
            x->num = atoi(buffer);
            x->den = 1;
            return 1;
        }
    }
    return 0;
}

// Funkcja wypisująca działanie na ułamkach
void print(struct Fraction x, struct Fraction y, const char op)
{
    struct Fraction result;
    int valid = 1;

    switch (op)
    {
        case '+':
            result = sum(x, y);
            break;
        case '-':
            result = sub(x, y);
            break;
        case '*':
            result = mul(x, y);
            break;
        case '/':
        case ':':
            result = quo(x, y);
            break;
        default:
            valid = 0;
            printf("%c - nieznane działanie\n", op);
            break;
    }

    if (valid)
    {
        printf("%d/%d %c %d/%d = %d/%d\n", x.num, x.den, op, y.num, y.den, result.num, result.den);
    }
}

// Funkcja wypisująca ułamek
void printFraction(struct Fraction x)
{
    if (x.den == 0)
    {
        printf("NaN\n");
        return;
    }
    if (x.num == 0)
    {
        printf("0\n");
        return;
    }
    if (x.den < 0)
    {
        x.num = -x.num;
        x.den = -x.den;
    }
    int my_nwd = nwd(abs(x.num), x.den);
    x.num /= my_nwd;
    x.den /= my_nwd;
    int whole = x.num / x.den;
    int remainder = abs(x.num % x.den);

    if (whole != 0 && remainder != 0)
    {
        printf("%d %d/%d\n", whole, remainder, x.den);
    }
    else if (remainder == 0)
    {
        printf("%d\n", whole);
    }
    else
    {
        printf("%d/%d\n", x.num, x.den);
    }
}

// Funkcja bezpiecznego odczytu z terminala
void safeInput(char *buffer, size_t size)
{
    if (fgets(buffer, size, stdin) != NULL)
    {
        // Usuń znak nowej linii, jeśli jest obecny
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
        {
            buffer[len - 1] = '\0';
        }
    }
}

int main()
{
    char input[100];
    struct Fraction x, y;
    char operator[10];

    printf("Wprowadz pierwszy ulamek lub liczbe calkowita (np. 2/3 lub 5): ");
    safeInput(input, sizeof(input));
    if (!getFraction(&x, input))
    {
        printf("Blad: niepoprawny ulamek.\n");
        return 1;
    }

    printf("Wprowadz operator (+, -, *, /, :): ");
    safeInput(input, sizeof(input));
    char op;
    if (!getOperator(&op, input))
    {
        printf("Blad: niepoprawny operator.\n");
        return 1;
    }

    printf("Wprowadz drugi ulamek lub liczbe calkowita (np. 2/3 lub 5): ");
    safeInput(input, sizeof(input));
    if (!getFraction(&y, input))
    {
        printf("Blad: niepoprawny ulamek.\n");
        return 1;
    }

    // Wypisanie wyników
    print(x, y, op);

    // Wypisanie ułamków
    printf("Pierwszy ulamek: ");
    printFraction(x);
    printf("Drugi ulamek: ");
    printFraction(y);

    return 0;
}
