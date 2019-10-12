/*
*Autor: Dana Elizabeth Ponce Del Angel
*Fecha: 12/10/19
*grupo: 008
*Horario: Lunes 9am -  11 am
*matricula: 1868698
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//****actividad1**********
	
	int i, longi, cont, cont2=0, p, x, a=0, j=0, u=0, longi2, h, letra[256], caracteres_dif;
	char cad1[' '], cad2[' '], b=' ', cad3[20];
	
	printf(" Ingrese la oracion:  ");
	fflush(stdin);
	gets(cad1); /*Prinmero se ingresa la cadena*/
	
	longi=strlen(cad1);

	/*Despues se invierte la cadena*/
	
	/*Con esto sabras si la cadena es polidroma de vista*/
	
	
	for (i=0;i<=longi;i++)
    {
      if (cad1[i]==b)
      {
     	i++;
      }
      cad2[j]=cad1[i];
      j++;
     }
     
     /*Este proceso es para saber que tiene las mismas letras al derecho y al reves*/
     
    x=0;
    longi2=strlen(cad2); 
  
    for (x=longi2-1;x>=0;x--)
    {
     if (cad2[x]==cad2[a])
     {
         u++;
     }
    a++;
    }
    
    /*si el proceso tiene las mismas letras al derecho y al reves, entonces se comienza a cambiar a otra cadena*/
    
    if (u==longi2){	
		printf("\n\n La palabra es palindrome");
	}	
    else{
    	printf("\n\n La palabra no es palindrome");
	}
  
	printf("\n\n\n\n\n\n");
    system("pause"); 
	system("cls"); 

	
	
	//********actividad2**********
	
	caracteres_dif=0;

	printf ("Introduzca la oracion: ");
	fflush(stdin);
	gets(cad3); /*Introducir las cadenas*/

	for (i=0;i<200;i++){
 		if (cad3[i]<0){
 			cad3[i]=(i*-1);
 		}
	}
	
	for (i=0 ; i<256 ; i++)
		letra[i]=0; /*Para saber si hay algun espacio*/
	for (i=0 ; cad3[i] != '\0' ; i++)
 		letra[cad3[i]]++; 
    for (i=0 ; i<256 ; i++)
 		if (letra[i] > 0)
			caracteres_dif++;
    
	printf ("Hay %i letras usadas.\n", caracteres_dif);
	printf ("Son:\n\n");
	for (i = 0 ; i < 256; i++){
 		if (letra[i] > 0)
  			printf ("Caracter %c = %i\n", i, letra[i]); /*Imprimir los resultados de las letras*/
  	}
  	
	return 0;
}
