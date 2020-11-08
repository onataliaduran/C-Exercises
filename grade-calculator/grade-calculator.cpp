#include <stdio.h> 
#include <conio.h>
#include <windows.h>

//Declarando las variables
float eva1,eva2,eva3,eva4; 
float promedio;

main()   
{
	printf("Favor ingrese las notas del alumno, a continuacion:\n");
	Sleep (1000);
	printf("Nota de evaluacion 1:\n");
	scanf("%f",&eva1); // Se captura y muestra la primera nota
	if(eva1<0) {
		printf("Las notas no pueden ser negativas\n");
	}
	else{
		printf("Nota de evaluacion 2:\n");
		scanf("%f",&eva2); // Se captura y muestra la segunda nota
		if(eva2<0) {
			printf("Las notas no pueden ser negativas\n");
		}
		else{
			printf("Nota de evaluacion 3:\n");
			scanf("%f",&eva3); // Se captura y muestra la tercera nota
			if(eva3<0) {
				printf("Las notas no pueden ser negativas\n");
			}
			else{
				printf("Nota de evaluacion 4:\n");
				scanf("%f",&eva4); // Se captura y muestra la cuarta nota
				if(eva4<0){
					printf("Las notas no pueden ser negativas\n");	
				}	
				else {
					promedio=(eva1+eva2+eva3+eva4)/4;
					printf ("El promedio de la nota es:%f", promedio);	
				}//Fin de la validacion de la cuarta nota
			}//Fin de la validacion de la tercera nota
		}//Fin de la validacin de la segunda nota
	}//Fin de la validacion de la primera nota
}//Fin de main 

