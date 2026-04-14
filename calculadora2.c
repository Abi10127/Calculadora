#include <stdio.h>
#include <math.h>

//declaración de variables globales
//declaración de fucniones 
double suma1(double n1, double n2)
{
    double r;
    r = n1 + n2;
    return r;
}

void suma2(double n1, double n2)
{
    double r;
    r = n1 + n2;
    printf("El resultado de la suma es %lf\n", r);
}


void main()
{
    double num1, num2, res;
    int op;

    do
    { 
        printf(" --- Calculadora ---\n"); 
        printf("\n¿Qué desea hacer\n"); 
        printf("1) Suma\n"); 
        printf("2) Resta\n"); 
        printf("3) Multiplicación\n"); 
        printf("4) Dividición\n");
        printf("5) Raíz cuadrada\n");
        printf("6) Potencia\n");
        printf("5) Salida\n"); 
        scanf("%d",&op); 
        do 
        {
                printf("Opción a escoger: \n"); 
                scanf("%d", &op); 
        }
        while(op < 1 || op > 7);

        if(op !=7)
        {
            if(op == 5)
            {
                printf("Dame la cifra para la raíz: ");
                scanf("%lf", &num1); 
                if(num1 < 0)
                {
                    do
                    {
                        printf("Número no válido, ingresar otro número: ");
                        scanf("%lf", &num1);
                    }
                    while(num1 < 0);
                }
            }
            else
            {
                if(op == 4)
                {
                    printf("Dame la primer cifra: ");
                    scanf("%lf", num1);
                    printf("Dame la segunda cifra: ");
                    scanf("%lf", num2);
                    if(num2 == 0);
                    {
                        do
                        {
                            printf("No es posible dividir entre cero, ingresar otro número: ");
                            scanf("%lf", &num2);
                        }
                        while(num1 == 0);
                    }
                }
                else
                {
                    if(op == 6)
                    {
                        printf("Dame la base: ");
                        scanf("%lf"
        }
                switch(op)
                {
