#include <stdio.h> 
#include <conio.h>
#include <windows.h> //Libreria para sleep 
#include <math.h> //Libreria para operaciones matematicas complejas

//Declaracion de la constante
const int x=1000;

//Las variables
float a,b,c,resolventePositivo,resolventeNegativo,raizCuadrada,base;

main()
{
	printf("Ingrese un valor para a, b y c:\n");
    Sleep(x);
    printf("a=\n");
	scanf("%f",&a);
    printf("b=\n");
    scanf("%f",&b);
    printf("c=\n");
    scanf("%f",&c);
    raizCuadrada=pow(b,2)-(4*a*c);
    if(raizCuadrada<0){
    	printf("La raiz cuadrada de un numero negativo no existe, no hay solucion");
	} else {
		raizCuadrada=sqrt(raizCuadrada);//Los nombres de las variables se pueden reutilizar
		printf("la raiz cuadrada es:%f\n",raizCuadrada);
		base=2*a;
		printf("la base de la division es:%f\n",base);
		resolventePositivo=(-b+raizCuadrada)/base;
		printf("El resolvente positivo es:%f\n",resolventePositivo);
		resolventeNegativo=(-b-raizCuadrada)/base;
		printf("El resolvente negativo es:%f\n",resolventeNegativo);
	}//fin del else
}//fin del main
