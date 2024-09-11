//en este espacio se encuentran las librerias de nuestra aplicacion 
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float frente=0;
    float fondo=0;
    float area=0;
    float Preciom2=0,total=0; //podemos declarar variables en una sola linea de codigo
    //siempre y cuando sean del mismo tipo de dato
    printf("Captura el valor de frente : \n");
    scanf("%f", &frente);

    printf("Captura el valor del fondo : \n");
    scanf("%f", &fondo);

    printf("Cual es el precio del metro cuadrado de terreno?\n");
    scanf("%f",&Preciom2);
    
    area=frente*fondo;
    total=area*Preciom2;


    printf("Su terreno tiene %f metros cuadrados \n",area);
    printf("por lo que tiene un costo de %f pesitos",total);
    getch();
    
    return 0;
}