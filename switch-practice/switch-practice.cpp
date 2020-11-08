#include <stdio.h> 
#include <conio.h>
#include <math.h> //Libreria para operaciones matematicas complejas

//variable del switch
int opcion;
//variables del case 1
char nombre[100], telefono[50];
int cedula;
//variables del case2
float nota1,nota2,nota3,promedio;
//variables del case 3
int numeroCuenta;
char depositante[100];
float montoDeposito,menos10,comision;


main()
{
	printf("1 Ingresar datos personales\n");
	printf("2 Promedio de 3 notas\n");
	printf("3 Deposito bancario\n");
	printf("4 Salir\n");
	printf("Elegir entre una de las opciones, indicando el numero:\n");
	scanf("%i",&opcion); //Se captura la opcion selecionada
	switch(opcion)
	{
		case 1:
			{
				printf("Ingrese su nombre:\n");
				scanf("%s",&nombre);
				printf("Ingrese su cedula:\n");
				scanf("%i",&cedula);
				printf("Ingrese su telefono:\n");
				scanf("%s",&telefono);
				break;	
			}
		case 2:
			{
				printf("Ingrese la nota 1:\n");
				scanf("%f",&nota1);
				printf("Ingrese la nota 2:\n");
				scanf("%f",&nota2);
				printf("Ingrese la nota 3:\n");
				scanf("%f",&nota3);
				promedio=(nota1+nota2+nota3)/3;
				printf("El promedio de las notas es:%f",promedio);	
				break;			
			}
		case 3:
			{
				printf("Ingrese numero de cuenta:\n");
				scanf("%i",&numeroCuenta);
				printf("Ingrese nombre del depositante:\n");
				scanf("%s",&depositante);
				printf("Ingrese monto a depositar:\n");
				scanf("%f",&montoDeposito);
				menos10=montoDeposito*0.10;
				comision=montoDeposito-menos10;
				printf("Monto total a depositar menos el 10 de comision:%f\n",comision);
				printf("Nombre del depositante es:%s\n",depositante);
				break;
			}
		case 4:
			{
				printf("Presione enter para cerrar el programa");
			}
	}//fin del switch
}//fin del main


