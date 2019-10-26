/*
*Autor: Dana Elizabeth Ponce Del Angel
*Fecha: 26/10/2019
*Grupo: 008
*Horario:sabado 9-11am
*Matricula: 1868698
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void pri(void); //La funcion void no tiene parametros
void pote(void);

int main(int argc, char *argv[]) {
	

	pri();
	
	system("pause");
	system("cls");
	//******act2******
	
	pote();

	
	printf("\n\n\n\n\n");
	system("pause");
	
	return 1;
}

//****** funcion De Actividad 1*******

void pri(void){
	
int num,i,cont,v1;
	do{
		printf("Ingrese el numero: \n\t: ");
		scanf("%d",&num);
	}while(num<=0); 
	   
	for(i=1;i<=1000000;i++){
		cont==0; // Esto debe estar en 0 para que no vaya acomulando numeros y nos afecte el resultado
		v1= num/i; //Ya que los numeros primos solo puedes ser divisibles entre dos, se hace este proceso para dividirlos
		
		if(v1== num || v1== 1); //Como solo son divisibles entre 2, unicamete contado va a valer como 2
			cont++;
	}
	if(cont==2){ //Como cont vale 2, entonces dara paso a imprimir que es primo
		printf("Es un numero primo");
	}
	else{
		printf("No es un numero primo");
	}	
}

//****** funcion De Actividad 2*******

void pote(void)
{
   int n, pot,t,i;
	if(n>0){
		printf(" \n Ingrese el numero: \n\t"); //Primero se igresa el numero
		scanf("%d",&n);
		printf("Ingrese la potencia: \n\t "); //Se ingresa la potencia
		scanf("%d",&pot);
		t=n; //El numero total se igualara al numero
		for(i=1;i<pot;i++){ //Se hace un for para repetir el numero de veces (Potencia) que se estara multiplicando por si mismo
				t=t*n; //El total se ira multiplicando por el numero
		}
		
		printf("El numero elevado es : %d",t);
	}
}

