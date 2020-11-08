#include <stdio.h> 
#include <conio.h>
#include <windows.h> //Libreria para sleep 
#include <math.h> //Libreria para operaciones matematicas complejas

//Declaracion de la constante
const int x=1000;

//Decalracion de las variables
float cateto1, cateto2;
float hipotenusa;

main()
{
	printf("Calculo de la hipotenusa\n");
	Sleep(x);
	printf("Ingrese el primer cateto y presione enter:\n");
	scanf("%f",&cateto1);
	printf("Ingrese el segundo cateto y presione enter:\n");
	scanf("%f",&cateto2);
	hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
	printf("La hipotenusa es:%f\n",hipotenusa);
}
