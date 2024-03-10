#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROUNDS 10

// Funkcja do konwersji numeru ruchu na nazwę
char *moveName(int move) {
    switch (move) {
        case 0:
            return "Kamień";
        case 1:
            return "Papier";
        case 2:
            return "Nożyce";
        default:
            return "Nieznany ruch";
    }
}

// Funkcja do obliczenia wyniku rundy
int roundResult(int playerMove, int computerMove) {
    if (playerMove == computerMove)
        return 0; // Remis
    else if ((playerMove == 0 && computerMove == 2) ||
             (playerMove == 1 && computerMove == 0) ||
             (playerMove == 2 && computerMove == 1))
        return 1; // Gracz wygrywa
    else
        return -1; // Komputer wygrywa
}

int main() {
    int playerMoves[MAX_ROUNDS];
    int computerMoves[MAX_ROUNDS];
    int results[MAX_ROUNDS];
    int round = 0;

    while (round < MAX_ROUNDS) {
        printf("Runda %d:\n", round + 1);
        printf("Wybierz swój ruch (0 - Kamień, 1 - Papier, 2 - Nożyce): ");
        scanf("%d", &playerMoves[round]);

        // Komputer wybiera ruch losowo
        computerMoves[round] = rand() % 3;

        printf("Twój ruch: %s\n", moveName(playerMoves[round]));
        printf("Ruch komputera: %s\n", moveName(computerMoves[round]));

        // Obliczanie wyniku rundy
        results[round] = roundResult(playerMoves[round], computerMoves[round]);
        if (results[round] == 0)
            printf("Remis!\n");
        else if (results[round] == 1)
            printf("Wygrałeś tę rundę!\n");
        else
            printf("Przegrałeś tę rundę.\n");

        round++;
    }

    // Wyświetlanie wyników wszystkich rund po wpisaniu komendy "scores"
    char command[10];
    printf("\nWpisz 'scores' aby wyświetlić wyniki wszystkich rund: ");
    scanf("%s", command);

    if (strcmp(command, "scores") == 0) {
        printf("\nWyniki poszczególnych rund:\n");
        for (int i = 0; i < MAX_ROUNDS; i++) {
            printf("Runda %d - Gracz: %s, Komputer: %s, Wynik: ", i + 1, moveName(playerMoves[i]), moveName(computerMoves[i]));
            if (results[i] == 0)
                printf("Remis\n");
            else if (results[i] == 1)
                printf("Gracz wygrywa\n");
            else
                printf("Komputer wygrywa\n");
        }
    } else {
        printf("Nieznana komenda.\n");
    }

    return 0;
}