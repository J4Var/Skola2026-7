#include <stdio.h>

int main() {
    char nazov1[50];
    float cena1;
    int pocet1;

    char nazov2[50];
    float cena2;
    int pocet2;
    
    char nazov3[50];
    float cena3;
    int pocet3;

    // produkt 1
    printf("Zadaj nazov produktu 1: ");
    scanf("%s", nazov1); 

    printf("Zadaj cenu: ");
    scanf("%f", &cena1); 

    printf("Zadaj pocet: ");
    scanf("%d", &pocet1); 


    //produkt 2
    printf("Zadaj nazov produktu 2: ");
    scanf("%s", nazov2); 

    printf("Zadaj cenu: ");
    scanf("%f", &cena2); 

    printf("Zadaj pocet: ");
    scanf("%d", &pocet2); 


    //produkt 3
    printf("Zadaj nazov produktu 3: ");
    scanf("%s", nazov3); 

    printf("Zadaj cenu: ");
    scanf("%f", &cena3); 

    printf("Zadaj pocet: ");
    scanf("%d", &pocet3); 

    float celkova_cena = (cena1 * pocet1) + (cena2 * pocet2) + (cena3 * pocet3);

    printf("\n--- VAS NAKUP ---\n");
    printf("%s: %d ks x %.2f EUR = %.2f EUR\n", nazov1, pocet1, cena1, pocet1 * cena1);
    printf("%s: %d ks x %.2f EUR = %.2f EUR\n", nazov2, pocet2, cena2, pocet2 * cena2);
    printf("%s: %d ks x %.2f EUR = %.2f EUR\n", nazov3, pocet3, cena3, pocet3 * cena3);

    printf("------------\n");
    printf("Celkova suma: %.2f EUR\n", celkova_cena);

    if (celkova_cena > 50.0) {
        float cena_po_zlave = celkova_cena * 0.90;
        printf("Aplikovana 10%% zlava! Cena po zlave: %.2f EUR\n", cena_po_zlave);
    }
    
    return 0;
}
