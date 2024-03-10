#include <stdio.h>

int main() {
    char name[50];

    printf("Wpisz swoje imię: ");
    scanf("%s", name);

    printf("Witaj, %s!", name);
    return 0;
}
