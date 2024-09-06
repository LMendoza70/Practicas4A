//en este espacio se encuentran las librerias de nuestra aplicacion 
#include<stdio.h>
/*este es un comentario 
que posee 
varias lineas*/
#include<conio.h>

int main(){
    float frente=0;
    float fondo=0;
    float area=0;

    printf("Captura el valor de frente : \n");
    scanf("%f", &frente);

    printf("Captura el valor del fondo : \n");
    scanf("%f", &fondo);

    area=frente*fondo;

    printf("Su terreno tiene %f metros cuadrados",area);
    getch();
    
    return 0;

}