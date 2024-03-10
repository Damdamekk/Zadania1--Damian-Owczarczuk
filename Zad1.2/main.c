#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 2

int main() {
    int grades[SUBJECTS][STUDENTS];
    float averages[SUBJECTS] = {0};
    int i, j;

    // Wczytanie ocen od użytkownika
    printf("Wprowadź oceny uczniów z matematyki:\n");
    for (i = 0; i < STUDENTS; i++) {
        printf("Uczeń %d: ", i + 1);
        scanf("%d", &grades[0][i]); // Wczytanie oceny z matematyki
    }

    printf("\nWprowadź oceny uczniów z fizyki:\n");
    for (i = 0; i < STUDENTS; i++) {
        printf("Uczeń %d: ", i + 1);
        scanf("%d", &grades[1][i]); // Wczytanie oceny z fizyki
    }

    // Obliczenie średniej ocen z każdego przedmiotu
    for (i = 0; i < SUBJECTS; i++) {
        for (j = 0; j < STUDENTS; j++) {
            averages[i] += grades[i][j];
        }
        averages[i] /= STUDENTS;
    }

    // Wypisanie średnich ocen
    printf("\nŚrednia ocen z matematyki: %.2f\n", averages[0]);
    printf("Średnia ocen z fizyki: %.2f\n", averages[1]);

    return 0;
}