/*
*Autor: Dana Elizabeth Ponce Del Angel
*Fecha: 10/09/2019
*Grupo: 008
*Horario: Sabado 9 a 11 am
*Matricula: 1868698
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		float nota;
	int dia, opc;
	char mat[30];
	
	setlocale(LC_CTYPE, "Spanish");

	//**********ACT 1*************
	
	printf("Ingrese la materia: ");
	fflush(stdin);
	gets(mat);
	
	printf("Ingrese la calificacion del estudiante: ");
	scanf("%f",&nota);
	
	if(nota <= 10 && nota >= 5){
		printf("\n\n Apto \n\n");
	}
	else{
		if(nota >= 0 && nota < 5){
			printf(" \n\nNo apto \n\n");
		}
		else{
			printf("\n\n Nota incorrecta \n\n");
		}
	}
	system("pause");
	
	//***********ACT 2************
	
	printf("Ingrese un numero del día de la semana: ");
	scanf("%d",&dia);
	
	if(dia == 1){
		printf("\n\n Lunes \n\n");
		}
		else{
			if(dia == 2){
				printf("\n\n Martes \n\n");
			}
				else{
					if(dia == 3){
						printf("\n\n Miercoles\n\n ");
						}
						else{
							if(dia == 4){
								printf("\n\n Jueves\n\n ");
								}
								else{
									if(dia == 5){
										printf("\n\n Viernes \n\n");
									}
										else{
											if(dia == 6){
												printf("\n\n Sabado\n\n ");
											}
												else{
													if(dia == 7){
														printf("\n\n domingo\n\n ");
													}
														else{
															printf("\n\n Error: Dia incorrecto\n\n ");
														}
													}
												}
											}
										}
									}
								}
							
	
	system("pause");
	
	//********** ACT Extra***********

	
	printf("\n\n\n\n\t\t\t Menu de opciones [1-5]: ");
	fflush(stdin);
	scanf("%d",&opc);
	
	switch(opc){
		case 1: printf("Usted escogio la opción 1");break;
		case 2: printf("Usted escogio la opción 2");break;
		case 3: printf("Usted escogio la opción 3");break;
		case 4: printf("Usted escogio la opción 4");break;
		case 5: printf("Usted escogio la opción 5");break;
	}
	
	system("pause");
	
	return 0;
	
	return 0;
}
