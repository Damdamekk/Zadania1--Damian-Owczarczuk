#include <stdio.h>

int sumMultiples(int n) {
    if (n < 0) // Jeśli liczba jest ujemna, zwracamy 0
        return 0;

    int sum = 0;
    for (int i = 3; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) // Sprawdzamy, czy liczba jest wielokrotnością 3 lub 5
            sum += i; // Dodajemy ją do sumy
    }
    return sum;
}

int main() {
    int number;
    printf("Podaj liczbę: ");
    scanf("%d", &number);

    int result = sumMultiples(number);
    printf("Suma wielokrotności 3 lub 5 poniżej %d wynosi: %d\n", number, result);

    return 0;
}
