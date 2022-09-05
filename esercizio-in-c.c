/*
Esercitazione 1

Lanciare code::blocks e provare ad usarlo

 - leggere da tastiera un numero intero (int), stamparlo in formato decimale, ottale e esadecimale.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    
    printf("Inserisci un numero intero ");
    scanf("%d", &a);
    printf("formato decimale: %d ottale: %o esadecimale: %x", a, a, a);

    return 0;
}