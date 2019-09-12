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

	
	/*Primero se piden la calificacion de la matería para hacer las comparaciones*/
	 
	printf("Ingrese la calificacion del estudiante del 1 al 10: ");
	scanf("%f",&nota);
	
	
	if(nota <= 10 && nota >= 5){
		printf("\n\n Apto \n\n");
		/*Se compara la nota para saber el tipo de calificacion que sera imprimida, Mientras 1 de los dos sean verdaderos, se considerara coo tal*/
	}
	else{
		if(nota >= 0 && nota < 5){
			printf(" \n\n No apto \n\n");
			/*La nota sera comparada, la validacion debe de ser correcta para salir*/
		}
		else{
			printf("\n\n Nota incorrecta \n\n");
			/*EN caso de que el numero no complazca la validacion, se imprimira error*/
		}
	}
	
	/*Los if anidados hacen que se escoga una sola opcion para no seguir avanzando a los demas*/
	
	system("pause");
	system("cls");
	
	//***********ACT 2************
	
	printf("Ingrese un numero del día de la semana: ");
	scanf("%d",&dia);
	
	/*Se solicita un numero del 1 al 7 para saber que dia de la semana se va a escoger*/
	
	if(dia == 1){
		printf("\n\n Lunes \n\n");
		/*Se compara el numero para saber el dia que se debe imprimir, en este caso el lunes es 1*/
		}
		else{
			if(dia == 2){
				printf("\n\n Martes \n\n");
						/*Se compara el numero para saber el dia que se debe imprimir, en este caso el 2 es Martes*/
			}
				else{
					if(dia == 3){
						printf("\n\n Miercoles\n\n ");
								/*Se compara el numero para saber el dia que se debe imprimir, en este caso el 3 es Miercoles*/
						}
						else{
							if(dia == 4){
								printf("\n\n Jueves\n\n ");
										/*Se compara el numero para saber el dia que se debe imprimir, en este caso el 4 es Jueves*/
								}
								else{
									if(dia == 5){
										printf("\n\n Viernes \n\n");
												/*Se compara el numero para saber el dia que se debe imprimir, en este caso el 5 es Viernes*/
									}
										else{
											if(dia == 6){
												printf("\n\n Sabado\n\n ");
												/*Se compara el numero para saber el dia que se debe imprimir, en este caso el 6 es Jueves*/
											}
												else{
													if(dia == 7){
														printf("\n\n domingo\n\n ");
														/*Se compara el numero para saber el dia que se debe imprimir, en este caso el 7 es Viernes*/
														}
													else{
															printf("\n\n Error: Dia incorrecto\n\n ");
															/*Si un numero no cabe en los dias de la semana (1- 7) se imprimira Dis Incorrecto*/ 
														}
													}
											}
									}
							}
					}
			}
							
	/*Esta actividad pudo haber sido mas sencilla utilizando el swtich, pero fue igualmente sencilla, mas alla de estar preocupada por el cierre correcto de llaves*/
	
	system("pause");
	system("cls");
	
	//********** ACT Extra***********

	
	printf("\n\n\n\n\t\t\t Menu de opciones [1-5]: ");
	fflush(stdin);
	scanf("%d",&opc);
	
	/*Se imprime el menu con las posibles opciones, en este caso fue de 1 a 5*/
	
	if(opc == 1){
		printf("Usted escogio la Opcion 1\n\n");
		/*Se compara el numero para saber que seleccion es la escogida, de ser la 1, se imprimir el anuncio*/
	}
	else{
		if(opc == 2){
			printf("Ustedes escogio la opcion 2\n");
			/*Se compara el numero para saber que seleccion es la escogida, de ser la 2, se imprimir el anuncio*/
		}
		else{
			if(opc == 3){
				printf("Usted escogio la opcion 3\n");
				/*Se compara el numero para saber que seleccion es la escogida, de ser la 3, se imprimir el anuncio*/
			}
			else{
				if(opc == 4){
					printf("Usted escogio la opcion 4\n");
					/*Se compara el numero para saber que seleccion es la escogida, de ser la 4, se imprimir el anuncio*/
				}
				else{
					if(opc ==5){
						printf("Usted escogio la opcion 5\n");
						/*Se compara el numero para saber que seleccion es la escogida, de ser la 5, se imprimir el anuncio*/
					}
					else{
						printf("Opcion No valida\n");
					}
				}
			}
		}
	}
	
	/*Es necesario poner el break por que de las opciones se salrarian al siguiente paso despues de terminar la correspondiente*/
	
	system("pause");
	system("cls");
	
	return 0;
	
	return 0;
}
