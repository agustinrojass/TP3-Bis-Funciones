#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
int numeroRandom();                                             //(1)
int numeroMayor(int numero,int *mayor);                         //(2)
int numeroMenor(int numero,int *menor);                         //(3)
int sumaMenores(int limite);                                    //(4)
void tabla(int numero);                                         //(5)
float calculadora(float numero1,float numero2,int operacion);   //(6)
int cambioSigno(int *numero);                                   //(7)
void carga(int *numero);                                        //(8)
int main()
{
    int ejercicio;
    do
    {
        do
        {
            printf("EJERCICIOS                                                 INGRESAR");
            printf("\nEJERCICIO 1  ...................................................  1");
            printf("\nEJERCICIO 2  ...................................................  2");
            printf("\nEJERCICIO 3  ...................................................  3");
            printf("\nEJERCICIO 4  ...................................................  4");
            printf("\nEJERCICIO 5  ...................................................  5");
            printf("\nEJERCICIO 6  ...................................................  6");
            printf("\nEJERCICIO 7  ...................................................  7\n");
            printf("\nIngrese el ejercicio: ");
            scanf("%i",&ejercicio);
        }
        while(ejercicio!=1 && ejercicio!=2 && ejercicio!=3 && ejercicio!=4 && ejercicio!=5 && ejercicio!=6 && ejercicio!=7 && ejercicio!=8 && ejercicio!=9 && ejercicio!=10 && ejercicio!=11 && ejercicio!=12 && ejercicio!=13 && ejercicio!=0);
        if(ejercicio!=0)
        {
            printf("\nEJERCICIO %i\n\n",ejercicio);
        }
        switch(ejercicio)
        {
            case 1:
            {
                ejercicio1();
            }
            break;
            case 2:
            {
                ejercicio2();
            }
            break;
            case 3:
            {
                ejercicio3();
            }
            break;
            case 4:
            {
                ejercicio4();
            }
            break;
            case 5:
            {
                ejercicio5();
            }
            break;
            case 6:
            {
                ejercicio6();
            }
            break;
            case 7:
            {
                ejercicio7();
            }
            break;
        }
    }
    while(ejercicio!=0);
    printf("\nTP3 BIS TERMINADO\n");
    printf("\nVersion 1.1\n");
    return 0;
}
int numeroRandom()                                              //INICIO FUNCION NUMERORANDOM       (1)
{
    int numero;
    time_t t;
    srand((unsigned) time(&t));                     //INICIALIZA EL GENERADOR DE NUMEROS RANDOM
    numero=rand()%100;
    return(numero);
}                                                               //FIN FUNCION NUMERORANDOM
int numeroMayor(int numero,int *mayor)                          //INICIO FUNCION NUMEROMAYOR        (2)
{
    if(numero>*mayor)
    {
        *mayor=numero;
    }
    return *mayor;
}                                                               //FIN FUNCION NUMEROMAYOR
int numeroMenor(int numero,int *menor)                          //INICIO FUNCION NUMEROMENOR        (3)
{
    if(numero<*menor)
    {
        *menor=numero;
    }
    return *menor;
}                                                               //FIN FUNCION NUMEROMENOR
int sumaMenores(int limite)                                     //INICIO FUNCION SUMAMENORES        (4)
{
    int i,suma=0;
    for(i=0;i<limite;i++)
    {
        suma=suma+i;
    }
    return suma;
}                                                               //FIN FUNCION SUMAMENORES
void tabla(int numero)                                          //INICIO FUNCION TABLA              (5)
{
    int i,resultado;
    for(i=1;i<11;i++)
    {
        resultado=numero*i;
        printf("%i x %i = %i\n",numero,i,resultado);
    }
}                                                               //FIN FUNCION TABLA
float calculadora(float numero1,float numero2,int operacion)    //INICIO FUNCION CALCULADORA        (6)
{
    float resultado;
    printf("\n");
    switch(operacion)
    {
        case 1:
        {
            resultado=numero1+numero2;
            printf("%.0f + %.0f = ",numero1,numero2);
        }
        break;
        case 2:
        {
            resultado=numero1-numero2;
            printf("%.0f - %.0f = ",numero1,numero2);
        }
        break;
        case 3:
        {
            resultado=numero1*numero2;
            printf("%.0f x %.0f = ",numero1,numero2);
        }
        break;
        case 4:
        {
            resultado=numero1/numero2;
            printf("%.0f : %.0f = ",numero1,numero2);
        }
        break;
    }
    return resultado;
}                                                               //FIN FUNCION TABLA
int cambioSigno(int *numero)                                    //INICIO FUNCION CAMBIOSIGNO        (7)
{
    *numero=-*numero;
    return *numero;
}                                                               //FIN FUNCION CAMBIOSIGNO
void carga(int *numero)                                         //INICIO FUNCION CARGA              (8)
{
    printf("Ingrese un valor: ");
    scanf("%i",&*numero);
    printf("\n");
}                                                               //FIN FUNCION CARGA
void ejercicio1()
{
    //Desarrollar una funcion que devuelva un valor RANDOM en el rango de 0 a 100.
    int numero;
    char continuar;
    printf("Enter para obtener un numero aleatorio del 1 al 100:");
    fflush(stdin);
    scanf("%c",&continuar);
    numero=numeroRandom();                                      //FUNCION NUMERORANDOM
    printf("El numero aleatorio es: %i\n\n",numero);
}
void ejercicio2()
{
    //Diseñe una funcion que reciba 3 numeros enteros y muestre el mayor y el menor.
    int i,numero,mayor,menor;
    printf("Cargue 1 numero: ");
    scanf("%i",&numero);
    mayor=numero;
    menor=numero;
    for(i=0;i<2;i++)
    {
        printf("Cargue 1 numero: ");
        scanf("%i",&numero);
        numeroMayor(numero,&mayor);                             //FUNCION NUMEROMAYOR
        numeroMenor(numero,&menor);                             //FUNCION NUMEROMENOR
    }
    printf("\nEl mayor es: %i\nEl menor es: %i\n\n",mayor,menor);
}
void ejercicio3()
{
    //Diseñe una funcion que reciba un numero entero N y realice la suma de los numeros enteros positivos menores que N y lo retorne.
    //N es un dato ingresado por el usuario en el main.
    int limite,suma;
    printf("Ingrese un numero tope: ");
    scanf("%i",&limite);
    suma=sumaMenores(limite);                                   //FUNCION SUMAMENORES
    printf("La suma de los numeros menores que %i es: %i\n\n",limite,suma);
}
void ejercicio4()
{
    //Desarrollar una funcion que muestre la tabla de multiplicar de un numero entero recibido por parametro.
    int numero;
    printf("Ingrese el numero para el que quiera saber la tabla de multiplicar: ");
    scanf("%i",&numero);
    printf("\n");
    tabla(numero);                                              //FUNCION TABLA
    printf("\n\n");
}
void ejercicio5()
{
    //Realice una pequeña calculadora, utilizando funciones (una funcion de suma, una de multiplicacion, una de resta, una de division).
    float numero1,numero2,resultado;
    int operacion;
    printf("Ingrese el primer numero: ");
    scanf("%f",&numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&numero2);
    printf("\nOperacion       Ingresar\nSuma  ...............  1\nResta  ..............  2\nMultiplicacion  .....  3\nDivision  ...........  4\n\nIngrese la operacion: ");
    scanf("%i",&operacion);
    resultado=calculadora(numero1,numero2,operacion);           //FUNCION CALCULADORA
    if(operacion==4)
    {
        printf("%.2f\n\n",resultado);
    }
    else
    {
        printf("%.0f\n\n",resultado);
    }
}
void ejercicio6()
{
    //Realizar una funcion que reciba un numero positivo entero por parametro por referencia, y cambie su signo a negativo.
    int numero;
    printf("Ingrese un numero positivo: ");
    scanf("%i",&numero);
    cambioSigno(&numero);                                       //FUNCION CAMBIOSIGNO
    printf("\nEl numero negativo es: %i\n\n",numero);
}
void ejercicio7()
{
    //Realizar una funcion que reciba dos numeros enteros por parametro por referencia y cargue sus valores el usuario dentro de la funcion.
    int numero1,numero2;
    carga(&numero1);                                            //FUNCION CARGA
    carga(&numero2);                                            //FUNCION CARGA
    printf("El primer valor es: %i\nEl segundo valor es: %i\n\n",numero1,numero2);
}
