#include <stdio.h> 
#include <conio.h>
#include <windows.h> //Libreria para sleep

//asi se declaran las constantes
const int x=1000; 

//declarando las variables
float numero1, numero2, numero3, numero4;
float promedio;
float suma, resta, multiplicacion, division;

main()
{
	printf("Favor ingrese 4 numeros a continuacion:\n");
	Sleep(x);
	printf("Ingrese el primer numero y presione enter:\n");
	scanf("%f",&numero1);
	printf("Ingrese el segundo numero:\n");
	scanf("%f",&numero2);
	printf("Ingrese el tercer numero:\n");
	scanf("%f",&numero3);
	printf("Ingrese el cuarto numero:\n");
	scanf("%f",&numero4);
	promedio=(numero1+numero2+numero3+numero4)/4;
	printf("El promedio es: %f\n",promedio);
	Sleep(x);
	suma=numero1+numero2+numero3+numero4;
	printf("Suma: %f\n",suma);
	Sleep(x);
	resta=numero1-numero2-numero3-numero4;
	printf("Resta: %f\n",resta);
	Sleep(x);
	multiplicacion=numero1*numero2*numero3*numero4;
	printf("Multiplicacion: %f\n",resta);
	Sleep(x);
	division=numero1/numero2/numero3/numero4;
	printf("Division: %f\n",division);
}


