/*
*Autor: Dana Elizabeth Ponce Del Angel
*Fecha: 14/09/2019
*grupo: 008
*Horario: sabado 9-11 am
*Matricula: 1868698
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, i, j, sum, suma=0;
	char op;
	
	//********Act1**********
	do{
		/*Para empezar el ciclo do/while permitira que entre al ciclo  desde la primera vez*/
		printf("\n Ingrese un numero entero: ");
		scanf("%d",&num);
		/*Se solicitan y se lee el numero que se ingreso*/
		sum=sum+num;
		fflush(stdin);
		/*Se usa el fflush para limpiar las variables*/
		do{
			printf("\n\n Desea ingresar otro numero [s/n]");
			scanf("%c",&op);
			/*Para saber si se ingresara otro numero se hace otro menu con el ciclo do/while. spara continuar ingresando numeros y n para parar*/
			fflush(stdin);
		} while(op != 'n' && op != 's');
		/*Se lee la opcion que se eligio */
	} while(op == 's');
	/*Mientras se escoga la s para seguir ingresando numeros, el ciclo se seguira repitiendo*/
	printf("\n\n\n\t\t La suma es: %d \n\n\n", sum);
	/*Se imprime la suma*/
	
	system("pause");
	system("cls");
	/*El system("cls") sire¿rve par alimpiar la pantalla y no acumular palabreria*/
	
	
	//********Actividad2********
	
	num=0;
	
	/*La Actividad se hara con el ciclo do while*/
	
	printf("\n\n Este programa sera hecho con el ciclo do/while");
	
	do{
		printf("\n Ingrese un numero menor a partir de menor a 100: ");
		scanf("%d",&num);
		/*Se piden los numeros para ser ingresados e impresos mientras sean menores a 100*/
		fflush(stdin);
	} while(num <= 100);
	/*El proceso se repetira mientras el numero ingresado sea menor a 100*/
	
	system("pause");
	system("cls");
	
	
	printf("\n\n\n Este mismo programa sera hecho con el ciclo while");
	
	num=0;
	
	/*Sera el mismo proceso, pero esta vez en lugar de comenzar con el do while, comenzara unicamente con while*/
	
	while(num <= 100){
		printf("\n\n\t Ingrese un numero: ");
		scanf("%d",&num);
		fflush(stdin);
	}
	
	/*Al momento de ejecutar no se ve ninguna diferencia, pero en el codigo es mas corto con el cilo while*/
	system("pause");
	return 0;
}
