#include<stdio.h>

//definimos la estructura fraccion
typedef struct{
    int num;
    int den;
} Fraccion;

//definimos nuestras funciones
Fraccion suma(Fraccion f1, Fraccion f2);
Fraccion resta(Fraccion f1, Fraccion f2);
Fraccion multiplica(Fraccion f1, Fraccion f2);
Fraccion division(Fraccion f1, Fraccion f2);
Fraccion simplificar(Fraccion f1);
float aflotante(Fraccion f1);
int mcd(Fraccion f1);

int main(){
    Fraccion v1, v2, res;
    int op;

    do{
        //menu de opciones
        printf("\nCalculadora de Fracciones\n");
        printf("1 .Sumar Fracciones\n");
        printf("2 .Restar Fracciones\n");
        printf("3 .Multiplicar Fracciones\n");
        printf("4 .Dividir Fracciones\n");
        printf("5 .Salir\n");
        printf("Elige una opccion...\n");
        scanf("%d", &op);

        //si el valor de opccion esta entre 1 y 4 captura datos si no no...
        if(op>=1 && op<=4){
            //capturamos los datos 
            printf("Ingrese el numerador y denominador de la primer fraccion...\n");
            scanf("%d %d",&v1.num,&v1.den);
            printf("Ingrese el numerador y denominador de la segunda fraccion...\n");
            scanf("%d %d",&v2.num,&v2.den);

            //validamos que las fracciones sean correctas 
            if(v1.den==0 || v2.den==0){
                printf("El denominador no puede ser cero...\n");
                continue;
            }
        }

        switch(op){
            case 1:
                res=suma(v1,v2);
            break;
            case 2:
                res=resta(v1,v2);
            break;
            case 3:
                res=multiplica(v1,v2);
            break;
            case 4:
                res=division(v1,v2);
            break;
            default:
                printf("Elige una opcion valida...\nintenta de nuevo...\n");
            break;
        }

        if(op>=1 && op<=4){
            res=simplificar(res);
            printf("El resultado es : %d/%d...\n",res.num,res.den);
        }

    }while(op!=5);

    return 0;
}

//funcion de suma de fracciones
//funcion de suma
Fraccion suma(Fraccion f1, Fraccion f2){
    Fraccion r;
    r.den=f1.den*f2.den;
    r.num=f1.num*f2.den + f1.den*f2.num;
    return r;
}