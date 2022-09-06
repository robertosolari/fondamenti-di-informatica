/*
Esercitazione 1

Lanciare code::blocks e provare ad usarlo

 - leggere da tastiera un carattere (char) e stampare il suo codice ASCII

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    
    printf("Inserisci un carattere per visualizzare il suo codice ascii ");
    scanf("%c", &ch);
    printf("the ascii code of %c is %d", ch,ch);

    return 0;
}