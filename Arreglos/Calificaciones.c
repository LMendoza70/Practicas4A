#include<stdio.h>
#include<stdlib.h>

int calificaciones[9]={0,0,0,0,0,0,0,0,0};

void imprime(int tam);

int main (){
    
    printf("Boleta de calificaciones ...\n");


    for (int i = 0; i < 9; i++)
    {
        printf("\nCaptura la calificacion %d ...\n",i+1);
        scanf("%d",&calificaciones[i]);
    }
    
    imprime(9);
    return 0;
}

void imprime(int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("El arrelgo en la posicion %d es igual a %d\n",i,calificaciones[i]);
    }
}