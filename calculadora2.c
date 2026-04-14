#include <stdio.h> 
int main () 
{ 
    int op, uno, dos; 
    do 
    { 
        printf(" --- Calculadora ---\n"); 
        printf("\n¿Qué desea hacer\n"); 
        printf("1) Sumar\n"); 
        printf("2) Restar\n"); 
        printf("3) Multiplicar\n"); 
        printf("4) Dividir\n"); 
        printf("5) Salir\n"); 
        scanf("%d",&op); 
        switch(op) 
        {
           case 1: 
                printf("\tSumar\n"); 
                printf("Introduzca los números a sumar separados por comas\n"); 
                scanf("%d, %d",&uno, &dos); 
                printf("%d + %d = %d\n", uno, dos, (uno + dos)); 
                break; 
            case 2: 
                printf("\tRestar\n"); 
                printf("Introduzca los números a restar separados por comas\n"); 
                scanf("%d, %d",&uno, &dos); 
                printf("%d - %d = %d\n", uno, dos, (uno - dos)); 
                break;
