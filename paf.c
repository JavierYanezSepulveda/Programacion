//Javier Andrés Yáñez Sepúlveda
//RUT: 18731299-K
#include<stdio.h>
#include<string.h>
#define MAX 35000
int main(){
    FILE *entrada=fopen("entrada.ent", "r");
    FILE *salida=fopen("salida.sal", "w");
    if(entrada==NULL) return 1;
    int i, P=1, x, resta[1], control;
    char N[MAX];                                //Tamaño del arreglo
    int *p1, *p2, *p3;                          //Punteros de las variables enteras
    int cabeza[1], cola[1];                     //Arreglos resultantes de la division de la cadena
    char *num;                                  //Puntero de la cadena
    num=&N[0];
    p1=&cabeza[0];
    p2=&cola[0];
    p3=&resta[0];
    fscanf(entrada, "%d %s", &control, &N);     //lectura del archivo de texto
    cabeza[0]=*num-48;                          //transformacion del caracter a numero
    for(i=1; i<control; i++){
        cola[0]=cola[0]+(*(num+i)-48);
    }
    x=*p1-*p2;
    if(x<0) x=x*(-1);
    while(P<control){                           //variable que designa el punto de corte "P"
        *p1=*p1+(*(num+P) -48);
        *p2=*p2-(*(num+P)-48);
        *p3=*p1-*p2;
        if(*p3<0) *p3=*p3*(-1);
        if(*p3<x) x=*p3;
        P++;
    }
    if(salida==NULL) return 1;
     fprintf(salida, "%d\n", x);
     fclose(salida);
     fclose(entrada);
}
