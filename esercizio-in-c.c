/*
Esercitazione 1

Lanciare code::blocks e provare ad usarlo

printf() e scanf()

 - definire  2 variabili a virgola mobile: una di tipo float e una di tipo double, inzializzarle e stamparle.

   Quanti decimali vengono stampati? Il valore assegnato viene troncato o arrotondato?

 - leggere da tastiera un numero intero (int), stamparlo in formato decimale, ottale e esadecimale.

 - leggere da tastiera un numero a virgola mobile (float), stamparlo di modo che occupi almeno 10 caratteri con massimo 2 cifre decimali

 - leggere da tastiera un numero a virgola mobile (float), stamparlo in formato scientifico

 - leggere da tastiera un carattere (char) e stampare il suo codice ASCII

 - leggere da tastiera 2 numeri interi, calcolare il risultato della divisione tra di loro e stamparlo

 - leggere da tastiera 2 caratteri (char), stamparli e stampare il loro codice ASCII

 - leggere da tastiera un numero intero e stampare il corrispondente carattere nella tabella ASCII

 - leggere da tastiera un numero intero non negativo tra 0 e 15. Stampare le 4 cifre della sua rappresentazione binaria dalla meno significativa alla piú significativa

   (suggerimento: usare l'operatore % e la divisione)

 - leggere da tastiera un numero intero, invocare la funzione square() vista a lezione e stampare il risultato
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // definire  2 variabili a virgola mobile: una di tipo float e una di tipo double, inzializzarle e stamparle.
    float a = 1.23456789;
    double b = 1.23456789;
    printf("a is float and is value is %f , b is double and is value id value is %lf", a, b);

    return 0;
}