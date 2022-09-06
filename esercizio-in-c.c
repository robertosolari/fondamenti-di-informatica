/*
Esercitazione 1

Lanciare code::blocks e provare ad usarlo

 - leggere da tastiera un numero a virgola mobile (float), stamparlo in formato scientifico

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    
    printf("Inserisci un numero a virgola mobile ");
    scanf("%f", &a);
    printf("formato decimale: %e", a);

    return 0;
}