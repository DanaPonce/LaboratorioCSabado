/*
*Autor: Dana Elizabeth Ponce Del Angel
*Fecha: 21/09/2019
*Grupo:008
*Horario: sabado 9am-11 am
*Matriculo: 1868698
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, exp, n;
	float cal, prom, sum=0, numele=1;
	
		//*****aactividad 1********
	
	for(i=1;i<=10;i++){
		/*Usamos el ciclo for para repetir la misma accion, primero iniciamos con un valor, despues el valor limite y despues se aumenta el mismo valor para que llegue de inicio a final*/
		do{
			printf("\n\n Ingrese la calificacion: ");
			/*Se pide que se ingrese la calificacion del alumno y se lea*/
			scanf("%f",&cal);
			if(cal<0|| cal>10){
				printf("Error \n\n\n");
				/*Se imprime "Error" Para que el usuario sepa cuando tuvo un error al momento de inducir la calificacion*/
			}
		}while(cal<0 || cal>10);
		/*Con el ciclo do while comprobamos que las calificaciones sean validas, del 1 al 10*/
	sum=sum+cal;
	/*Se suman todas las calificaciones para al foinal lograr obtener el promedio*/
	}
	prom=sum/10;
	printf("El promedio es: %f \n\n", prom);
	if(prom>7) {
		printf("APROBADO \n\n");
		/*Con el If se imprime si el alumno fue aprobado o reprobado*/
	}
	else{
		printf("REPROBADO \n\n");
	}
	system("pause");
	system("cls");
	
	//*********actividad2********
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	printf("Ingrese el exponente: ");
	scanf("%d",&exp);
	/*Primero se pide que se ingrese un numero y la pontencia a la que se va a aelevar*/
		for(j=1;j<=exp;j++){
			numele=numele*n;
		}
	/*Con la operacion dada se obtiene el exponente, el ciclo for se utiliza para reperir la operacion hasta que el indice llegue a la potencia dada*/
	fflush(stdin);
	printf("%d elevado a %d = %.2f \n\n",n,exp,numele);
	system("pause");
	return 0;
}

