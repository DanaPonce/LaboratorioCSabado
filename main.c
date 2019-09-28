/*
*Autor: Dana Elizabeth Ponce Del Angel
*Fecha: 28/09/2019
*Grupo: 008
*Horario: sabado 9am-11am
*Matricula: 1868698
*/


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int NDC[24], R, i, aut, A=8, B=4;
	
	//******ACTIVIDAD 1*******
		
	for(i=0;i<24;i++){
		if(i!=2 && i!=21){
			do{
				fflush(stdin);
				printf("Ingrese el numero de autos que hay en la hora %d: ",i);
				scanf("%d",&aut);
				NDC[i]=aut;
				/*Primero se piden que se ingrese el numero de autos que hay almacenados y se guardan en el arreglo. Pero faltarían dos numeros*/
			}while(aut<0);
		}
	}

	R=2;
	NDC[R]=57;
	fflush(stdin);
	/*Despues como esos dos numeros que faltan tendran un numero espoecifico, se pondran despues. (Ahora) especificando los valores*/
	R=21;
	NDC[R]=57;
	fflush(stdin);
	
	for(i=0;i<24;i++){
		printf("\n\t NDC[%d]=%d",i+1,NDC[i]);	
	}
	/*Se imprimen los valores*/
	printf("\n\t En la hora %d hay %d autos \n\n",R,NDC[R]);	
	/*Se imprime el valor especifico que se pidio*/


	//********* Actividad 2**********
	
	fflush(stdin);
	R=A/B;
	/*Ahora no sabemos que variable especifica se pide par ala hora, pero sabemos como sacarla, asi que efectuamos la operacion*/
	
	
	for(i=0;i<24;i++){
		if(i!=R){
			/*Como no sabemos el valor de la variable, ponemos la variable como un alto para que no la tome en cuenta y siga con el proceso*/
			do{
				fflush(stdin);
				printf("Ingrese el numero de autos que hay en la hora %d: ",i);
				scanf("%d",&aut);
				NDC[i]=aut;
			}while(aut<0);
		}
	}
	
	fflush(stdin);
	NDC[R]=57;
	
	/*La pocision en la que se encuentra la variable se le asigna un valor especifico*/
	 
	for(i=0;i<24;i++){
		printf("\n\t NDC[%d]=%d",i+1,NDC[i]);	
	}
	
	/*Todo se imprime en orden*/
	
	
	
	return 0;
}
