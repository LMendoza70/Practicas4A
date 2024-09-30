#include<stdio.h>
#include<string.h>
int main(){
    float v1=0,v2=0,res=0;
    char op=' ';
    char op2=' ';

    do{
        printf("Captura el valor 1\n");
        scanf("%f",&v1);
        printf("Captura el valor 2\n");
        scanf("%f",&v2);
        
        printf("Elije que operacion realizaras...\n");
        printf("[ + ] Suma\n");
        printf("[ - ] Resta\n");
        printf("[ * ] Multiplicacion\n");
        printf("[ / ] Division\n");
        
        getchar();//se utiliza getchar para limpiar el buffer y poder trabajar adecuadamenete con cadenas 
        //se recomienda utilizar siempre getchar antes de cada scantf 
        scanf("%c",&op);

        switch (op)
        {
        case '+':
            res=v1+v2;
            break;
        case '-':
            res=v1-v2;
            break;
        case '*':
            res=v1*v2;
            break;
        case '/':
            res=v1/v2;
            break;
        default:
            printf("Elije otra opcion...\n");
            break;
        }

        printf("El resultado de la operacion es : %f \n",res);
        printf("Quieres hacer otra operacion? [s]...\n");
        
        getchar();
        scanf("%c",&op2);

    }while(op2=='s');

    return 0;
}