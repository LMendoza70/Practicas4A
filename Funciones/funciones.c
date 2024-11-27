#include<stdio.h>
#include<math.h>
float v1=0, v2=0, resultado=0;
char op=' ';

void captura(){
    printf("Porfavor Ingresa el valor 1\n");
    scanf("%f", &v1);
    printf("Porfavor ingresa el valor 2\n");
    scanf("%f", &v2);
}

void menu(){
    printf("que operacion quiere hacer?\n");
    printf("[ +/s ] Suma\n");
    printf("[ -/r ] Resta\n");
    printf("[ */x ] Multiplicacion\n");
    printf("[ //d ] Division\n");
    printf("[ p/^ ] Potencia\n");
    printf("Elige una opcion: ");
    scanf("%s", &op);
}

float suma(float val1,float val2){
    float res=0;
    res=val1+val2;
    return res;
}

float resta(){
    float res=0;
    res=v1-v2;
    return res;
}

float multiplicacion(float val1, float val2){
    float res=0;
    res= val1*val2;
    return res;
}
int main(){
    captura();
    menu();
    
    switch (op)
    {
    case '+':
    case 's':
        resultado=suma(v1,v2);
        break;
    case '-':
    case 'r':
        resultado=resta();
        break;
    case '*':
    case 'x':
        resultado=multiplicacion(v1,v2);
        break;
    case '/':
    case 'd':
        
        break;
    case 'p':
    case '^':
        
        break;
    default:
        printf("La opcion elegida no se encuantra en el menu...\n");
        break;
    }
    
    return 0;
 }

float division(){
    float res=0;
    res=v1/v2;
    return res;
}

float potencia(){
    float res=0;
    res=pow(v1,v2);
    return res;
}



 
 /*


    //preguntamos que operacion quiere hacer el usuario 
    
    //comenzamos a utilizar swhitc case: sobre la variable op
    

    printf("El resultado de la operacion con los valores %f y %f es : %f",v1,v2,res);*/