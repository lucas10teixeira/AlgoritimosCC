/*
* Programa: main.c
* Descrição: Algoritmo que lê uma quantidade de tempo em minutos e escreve o tempo equivalente em
segundos na tela.

* Autor: Lucas Teixeira

*/

#include <stdio.h>

int main()
{
    int tempoemminutos;
    int tempoemsegundos;
    
    scanf("%d", &tempoemminutos);
    tempoemsegundos = (tempoemminutos*60);
    printf("%d",tempoemsegundos);

    return 0;
}
