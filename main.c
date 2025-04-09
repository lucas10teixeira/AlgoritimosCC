/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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