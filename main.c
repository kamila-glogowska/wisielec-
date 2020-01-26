#include <stdio.h>
#include <stdlib.h>
#include <time.h>       // Wymagane by SRAND zadzialalo. Pobiera aktualny czas z komputera

int numer_pliku;    // wylosowany numer // wybór pliku

char file;

int main()
{
    srand(time(NULL));  // pobiera czas z zegara // seed

    numer_pliku = rand()%3; // losuje od 0 do 3 // ilość plików

    // printf("Dziala: %d", numer_pliku);   // test // czy poprawnie losuje plik

    if(numer_pliku == 0){FILE *file = fopen("raz.txt", "r");};
    if(numer_pliku == 1){FILE *file = fopen("dwa.txt", "r");};
    if(numer_pliku == 2){FILE *file = fopen("trzy.txt", "r");};
    if(numer_pliku == 3){FILE *file = fopen("cztery.txt", "r");};

    int ch;

    while((ch = getc(file)) != EOF) // do czytania zawartości pliku
    {
        putc(ch, stdout);   // wypisuje zawartość pliku
    }
    fclose(file);   // zamyka plik

    return 0;
}