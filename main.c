/*
*Autor: Dana Elizabeth Ponce Del Angel
*fecha: 24/10/2019
*grupo:008
*Horario Lunes 9am - 11am
*Matricula: 1868698
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct estudiante{
	char nombre[50];
	char sexo;
	int edad;
	float cal[5];
	float prom;
};
struct pandas{
	char nombre[20];
	float peso;
	int anio;
	int edad;
	char sexo;
};

int main(int argc, char *argv[]) {
	struct estudiante e[' '];
	struct pandas p[' '];
	int i=0, j, n, op, op2, r, pa, dc;
	float sum, may=0;
	 
	setlocale(LC_CTYPE, "Spanish");
	
		// ********act1************
	
	do{
		do{
			sum=0;
			printf("\n\n Ingrese el nombre del estudiante: \n\t");
			fflush(stdin);
			scanf("%s",&e[i].nombre); //Con esto se garantiza que el ciclo no se repita infinitamente ya que se esta limpiando para la cadena de caracteres
			do{
				printf("Ingrese el sexo del estudiante [M-Masculino/F-Femenino]: \n\t");
				fflush(stdin);
				scanf("%c",&e[i].sexo);
			}while(e[i].sexo!='M' && e[i].sexo != 'F'); //Ya que no iremos mas alla de dos sexos, en esta parte se garantizo que solo uno se escogiera alguno de los dos
			do{
				printf("Ingrese la edad del estudiante: \n\t"); //Se ingresa la edad y nos aseguramos que no sea una edad negativa (Menor a 0)
				scanf("%d",&e[i].edad);
			}while(e[i].edad<0);
			for(j=0;j<5;j++){
				printf("\n Ingrese la calificiacion %d del estudiante: \n\t", j+1); //Con fin de repetir 5 veces la calificacion 5  veces para no estarlo repitiendo a cada rato
				fflush(stdin); // El fflush es para limpiar el vector y asegurarnos que no tengfa basura
				scanf("%f",&e[i].cal[j]);
				sum=sum+e[i].cal[j]; //Esta sera la sumatoria de las calificaciones
			}
			e[i].prom=sum/5; //El promedio se saca diciediendo la sumatoria entre las 
			printf("Su promedio es de: %.2f", e[i].prom);
			do{
				printf("\n\n\t Datos ccorectos [1-si/2-No]: \n\t");
				scanf("%d",&op);
			}while(op!= 1 && op!=2); // Esta es una manera de salber que los dato son correctos y no den mas opciones de las requeridas
		}while(op==2);//Mientras los datos NO sean correctos, entonces el ciclo se va a repetir
		i++;//Como no sabemos cuantos son, comienza a contar desde 0 y gradualmente se aumenta el contador, en este caso, i.
		do{
			printf("\n\n\t Ingresar otro alumno [1-si/2-No]: \n\t");
			scanf("%d",&op2);
		}while(op2!= 1 && op2!=2); //SE valida que no haya mas opciones que 1 y 2
	}while(op2==1); // Si SI se desea ingresar otro alumno, entonces el ciclo volvera a repetirse
	
	for(n=0;n<i;n++){
		for(j=1;j<i;j++){ //Con este mecanismo, precido al metodo burbuja, encontramos el promedio mas alto
			if(e[j].prom>e[n].prom){
				may=e[j].prom;
			}
		}
	}
	
	for(n=0;n<i;n++){
		if(e[n].prom==may){ //SE imprime el promedio mas alto
			printf("\n\\t\t\t %s Es el estudiante con mayor promedio con una calificacion de %.2f puntos",e[n].nombre, e[n].prom);
		}
	}
	
	printf("\n\n\n");
	
	system("pause");
	system("cls");
	
	

	//******* act 2 *******
	do{
		printf("Ingrese la cantidad de Pandas: \n\t");
		scanf("%d",&pa);
	}while(pa<0);
	
	for(j=0;j<pa;j++){
		do{
			printf("\n\n\n Ingrese el nombre del panda: \n\t");
			fflush(stdin);
			scanf("%s",&p[j].nombre); //Se ingresa el nombre del panda
			do{
				printf("Ingrese la edad del panda en años: \n\t");
				scanf("%d",&p[j].edad); //La edad del panda
			}while(p[j].edad<0); //Se garantiza que nos ea una edad negativa
			do{
				printf("Ingrese el peso del panda en kilogramos: \n\t");
				scanf("%f",&p[j].peso); //Se ingresa el peso del panda
			}while(p[j].peso<0); //Nos aseguramos que no sea un peso menor que 0
			p[j].anio=2019-p[j].edad; //Di este paso por sentado, pero si no, tambien se puede preguntar el año en que nacio, pero puede que no sea un dato que pueda ser concreto, ya que puede haber diferentes años y edades y quedaría muy revuelto y poco claro.
			do{
				printf("Ingrese el sexo del panda [m- Masculino/f-Femenino]: \n\t");
				fflush(stdin);
				scanf("%c",&p[j].sexo);
			}while(p[j].sexo!='m' && p[j].sexo!='f'); //El sexo del panda, si es masculino o femenino, esta mas sencillo que en la validacion de la actividad 1
			do{
				printf("Datos correctos [1-si/2-No]: \n\t");
				scanf("%d",&dc);//Nos aseguramos que los datos sean correctos
			}while(dc!=1 && dc != 2);
		}while(dc==2); //Si los datos NO son correctos, entonces deberan ser corregidos, ¿Por que corregirlos aqui si ya he puesto do/Whiles para validar el peso y la edad? Por que quiza el nombre o el sexo del Panda este incorrecto
	}
	
	for(j=0;j<pa;j++){
		if(p[j].edad>5 && p[j].sexo=='f'){ //Aqui nos aseguramos de que esten validas las caracteristicas necesarias para saber si la panda puede tener crias ¿Cuales son? Que sea hembra mayor a 5 años
			printf("\n\t\t 1");
			printf("\n\n\t La panda %s de edad %d puede tener crias.",p[j].nombre, p[j].edad); // DE cumplir las caracteristicas, se imprime un aviso
		}
	}
	
		printf("\n\n\n");
	 system("pause");
	return 0;
}
