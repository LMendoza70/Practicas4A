#include<stdio.h>
//vamos a utilizar string para manipular cadenas
#include<string.h>
#include<math.h>

int main(){
    float v1=0, v2=0, res=0;
    char op=' ';
    //solicitando valores 
    printf("Porfavor Ingresa el valor 1\n");
    scanf("%f", &v1);
    printf("Porfavor ingresa el valor 2\n");
    scanf("%f", &v2);

    //preguntamos que operacion quiere hacer el usuario 
    printf("que operacion quiere hacer?\n");
    printf("[ +/s ] Suma\n");
    printf("[ -/r ] Resta\n");
    printf("[ */x ] Multiplicacion\n");
    printf("[ //d ] Division\n");
    printf("[ p/^ ] Potencia\n");
    scanf("%s", &op);

    //comenzamos a utilizar swhitc case: sobre la variable op
    switch (op)
    {
    case '+':
    case 's':
        res=v1+v2;
        break;
    case '-':
    case 'r':
        res=v1-v2;
        break;
    case '*':
    case 'x':
        res=v1*v2;
        break;
    case '/':
    case 'd':
        res=v1/v2;
        break;
    case 'p':
    case '^':
        res=pow(v1,v2);
        break;
    default:
        printf("La opcion elegida no se encuantra en el menu...\n");
        break;
    }

    printf("El resultado de la operacion con los valores %f y %f es : %f",v1,v2,res);

    return 0;
}