#include <stdio.h>
#include <stdlib.h>
#include <time.h>       // Wymagane by SRAND zadzialalo. Pobiera aktualny czas z komputera
// SPORT PO POLSKU
int numer_pliku;    // wylosowany numer // wybór pliku

 FILE *file;
int main()
{
    srand(time(NULL));  // pobiera czas z zegara // seed

    numer_pliku = rand()%2; // losuje od 0 do 2 // iloœæ plików

    // printf("Dziala: %d", numer_pliku);   // test // czy poprawnie losuje plik

    if(numer_pliku == 0)file = fopen("sport_1_pl.txt", "r");
    if(numer_pliku == 1)file = fopen("sport_2_pl.txt", "r");
    if(numer_pliku == 2)file = fopen("sport_3_pl.txt", "r");

    int ch;

    while((ch = getc(file)) != EOF) // do czytania zawartoœci pliku
    {
        putc(ch, stdout);   // wypisuje zawartoœæ pliku
    }
    fclose(file);   // zamyka plik

    return 0;
}
