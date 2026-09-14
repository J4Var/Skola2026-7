#include <stdio.h>   // printf, scanf (vstup a vystup)
#include <stdlib.h>  // rand, srand (nahodne cisla)
#include <time.h>    // time (cas na zamiesanie generatora)
#include <string.h>  // strlen (dlzka retazca)

int main(void)
{
    // 1. Naciitanie dlzky hesla
    printf("Zadaj dlzku hesla: ");

    int dlzkaHesla;
    // Ak uzivatel zada blbost (pismeno namiesto cisla) alebo zaporne cislo, stopne to
    if (scanf("%d", &dlzkaHesla) != 1 || dlzkaHesla <= 0) {
        printf("Neplatny vstup! Musis zadat kladne cele cislo.\n");
        return 1; // 1 = chyba, program nepokracuje
    }

    // 2. Pool znakov, z ktorych si mozeme vyberat
    char povoleneZnaky[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    
    // Zistime si, kolko ich v tom strungu je (size_t aby sedeli typy)
    size_t dlzka = strlen(povoleneZnaky);

    // Seed pre generator – bez tohoto by padali vzdy tie iste hesla po spusteni
    srand((unsigned int)time(NULL));

    // 3. Generovanie samotnych pismeniek
    size_t num;
    for (int i = 0; i < dlzkaHesla; i++)
    {
        // Vyberieme nahodny index v rozmedzi 0 az (dlzka - 1)
        num = rand() % dlzka;
        
        // Vytlaci konkrety znak na danom indexe
        printf("%c", povoleneZnaky[num]);
    }

    // Odriadkovanie v terminali na konci, nech to nevypada dolepene
    printf("\n");

    return 0; // 0 = vsetko zbehlo OK
}
