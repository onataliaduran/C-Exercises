#include <stdio.h> 
#include <conio.h>
#include <windows.h> //Libreria para sleep 
#include <math.h> //Libreria para operaciones matematicas complejas

const int x=1000;

//las variables
float gradosC, gradosF;

main()
{
	printf("Ingrese los grados celsius a transformar:\n");
	Sleep(x);
	printf("Grados Celsius:\n");
	scanf("%f",&gradosC);
	gradosF=1.8*gradosC+32;
	printf("Grados fahrenheit:%f",gradosF);
}
