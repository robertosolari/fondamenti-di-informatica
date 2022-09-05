/*
Esercitazione 1

Lanciare code::blocks e provare ad usarlo

printf() e scanf()

 - definire  2 variabili a virgola mobile: una di tipo float e una di tipo double, inzializzarle e stamparle.

   Quanti decimali vengono stampati? Il valore assegnato viene troncato o arrotondato?

 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float a = 1.23456789;
    double b = 1.23456789;
    printf("a is float and is value is %f , b is double and is value id value is %lf", a, b);

    return 0;
}