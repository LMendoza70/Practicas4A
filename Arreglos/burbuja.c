#include<stdio.h>

int main(){
    int arr[5]={0,0,0,0,0};
    int bandera=0;
    //capturamos los elemntos del arreglo
    for (int i = 0; i < 5; i++)
    {
        printf("Captura el elemnto %d del arreglo : \n",i+1);
        scanf("%d",&arr[i]);
    }

    //imprimimos nuestro arreglo capturado
    printf("Arreglo Capturado\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    //ordenamos a nuestro arreglo
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[j]>arr[j+1]){
                int aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }else{
                bandera=1;
            }
        }
        if(bandera==1)
        {
            printf("Entramos %d veces\n",i);
            break;
        }
        
    }

    printf("Arreglo Ordenado\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    
    
    
    return 0;
}