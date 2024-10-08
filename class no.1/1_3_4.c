//1. Podstawowa funkcja rekurencyjna

#include <stdio.h>

int fibo1(int n) {
    if (n <= 1) {
        return n;  // F(0) = 0, F(1) = 1
    }
    return fibo1(n - 1) + fibo1(n - 2);
}

//2. Funkcja rekurencyjna z pamięcią (memoizacja)
#include <stdio.h>

#define MAX 100

int memo[MAX];

int fibo2(int n) {
    if (n <= 1) {
        return n;  // F(0) = 0, F(1) = 1
    }
    if (memo[n] != -1) {
        return memo[n];  // Zwróć zapamiętaną wartość
    }
    memo[n] = fibo2(n - 1) + fibo2(n - 2);  // Oblicz i zapamiętaj
    return memo[n];
}

void initialize_memo() {
    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;  // Inicjalizacja tablicy pamięci
    }
}


//3. Funkcja rekurencyjna z ograniczeniem głębokości (z optymalizacją)
#include <stdio.h>

int fibo3(int n, int a, int b) {
    if (n == 0) return a;
    if (n == 1) return b;
    return fibo3(n - 1, b, a + b);
}

int fibo(int n) {
    return fibo3(n, 0, 1);
}

//4. Funkcja rekurencyjna z dynamicznym programowaniem (tablica)
#include <stdio.h>

int fibo4(int n) {
    if (n <= 1) {
        return n;  // F(0) = 0, F(1) = 1
    }
    
    int fib[n + 1];  // Tablica do przechowywania wartości Fibonacciego
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];  // Oblicz F(n) w sposób iteracyjny
    }
    return fib[n];
}
