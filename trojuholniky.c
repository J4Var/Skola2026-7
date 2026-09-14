#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int height;
    char direction[20];
   printf("Zadaj vysku trojuholnika: ");


    if (scanf("%d", &height) != 1 || height <= 0) {
    printf("Neplatny vstup! Musis zadat kladne cele cislo.\n");
    return 1; // Ukončí program s chybovým kódom 1
    }


    printf("Zadaj smer (vzostupny/ zostupny/ piramida): ");
    scanf(" %19[^\n]", direction);                     
     //Input (%19[^\n] znamena string s max dlzkou 19 znakov ocakavaj) a ulozenie do premennej direction



    if (strcmp(direction, "vzostupny") == 0) {
    // if input je rovnaky ako vzostupny da 0 tym padom ide funkciu tuto

    // Vonkajší cyklus riadi riadky (zacne riadok 1 potom ak je cislo riadku menej alebo rovne height tak sa cyklus opakuje)
    for (int i = 1; i <= height; i++) {
        
        // Vnútorný cyklus tlačí hviezdičky na danom riadku.
        // Počet opakovaní závisí od čísla aktuálneho riadku cize mu povie tolko daj hviezdiciek kolko je riadkov teraz (j <= i).
        for (int j = 1; j <= i; j++) {
            printf(" * ");
        }
        
        // Po vykreslení všetkých hviezdičiek na riadku skočíme na nový riadok
        printf("\n");
    }

    }

    else if (strcmp(direction, "zostupny") == 0) {


        // Vonkajší cyklus riadi riadky (zacne riadok 1 potom ak je cislo riadku menej alebo rovne 5 tak sa cyklus opakuje)
    for (int i = height; i >= 1; i--) {
        
        // Vnútorný cyklus tlačí hviezdičky na danom riadku.
        // Počet opakovaní závisí od čísla aktuálneho riadku cize mu povie tolko daj hviezdiciek kolko je riadkov teraz (j <= i).
        for (int j = 1; j <= i; j++) {
            printf(" * ");
        }
        
        // Po vykreslení všetkých hviezdičiek na riadku skočíme na nový riadok
        printf("\n");
    }
}
    else if (strcmp(direction, "piramida") == 0) {
    for (int i = 1; i <= height; i++) {
        //Odsadenie medzerou = ak je medzera menej ako height - i (riadok) print medzeru
        for (int spaces = 1; spaces <= height - i; spaces++) {
            printf(" ");
        }

        // hviezdy za medzerami ako pri basic trojkuholniku
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }
}


    else {
    // Kód, ktorý sa spustí, ak používateľ zadal neplatný smer
    printf("Neplatny smer!\n");
    }

    return 0; // Správa pre systém, že program zbehol bez chýb
    }
