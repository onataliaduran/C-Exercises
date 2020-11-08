#include <stdio.h> 
#include <conio.h>

//las variables
int a,b,c;

main()
{
	printf("Ingrese un  valor para a:\n");
	scanf("%i",&a);
	printf("Ingrese un valor para b:\n");
	scanf("%i",&b);
	printf("Ingrese un valor para c:\n");
	scanf("%i",&c);
	if(a>b && a>c) {
		printf("El numero mayor es a %i",a);
	} else if(b>c){
		printf("El numero mayor es b %i",b);	
	} else {
		printf("El numero mayor es c %i",c);
	}
}
