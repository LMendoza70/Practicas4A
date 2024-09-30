#include<stdio.h>

int main(){
    //aplicacion que imprime los numeros del 1 al 20 con todos los ciclos
    //ciclo for
    for(int i=1;i<=20;i++){
        printf("Con for %i \n",i);
    }

    //utilizando el ciclo while
    int i=1;

    while (i<=20)
    {
        printf("Con while %i \n",i);
        i++;
    }

    //utilizando do while
    i=1;
    do
    {
        printf("Con do while %i \n",i);
        i++;
    } while (i<=20);
    
    

    
    return 0;
}