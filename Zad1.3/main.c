#include <stdio.h>

// Funkcja do obliczania silni
int factorial(int n) {
    if (n == 0 || n == 1) // Warunek stopu dla silni
        return 1;
    else
        return n * factorial(n - 1); // Rekurencyjne wywołanie funkcji
}

// Funkcja do obliczania silni dla każdej liczby w tablicy
void calculateFactorials(int array[], int size) {
    printf("Silnie dla każdej liczby:\n");
    for (int i = 0; i < size; i++) {
        printf("%d! = %d\n", array[i], factorial(array[i]));
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]); // Obliczanie liczby elementów w tablicy

    calculateFactorials(array, size); // Wywołanie funkcji obliczającej silnie dla każdej liczby w tablicy

    return 0;
}