/*
*Autor: Dana Elizabeth Ponce Del Angel
*Fecha: 02/11/2019
*Grupo: 008
*Horario: sabado 9am - 11am
*Matricula: 1868698
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, op, cona=0, cone=0, coni=0, cono=0, conu=0, voc=0, *apu, *apun,  *apunt;
	float lol;
	char cad[' '], *ap;
	
	//****** act1 *********
	
	do{
		printf("Ingrese una oracion: \n\t"); //Primero se pide que se ingrese la oracion;
		fflush(stdin); //Siempre hay que poner un fflush, por que si no se crea un ciclo infinito (Al menos  a mi)
		gets(cad);
		do{
			printf("Oracion correcta: [1-si/2-No]: \n\t"); //Verificamos que sea la oracion correcta. 
			scanf("%d",&op);
		}while(op != 1 && op != 2); //Y que no haya nmas de dos opciones en el menu
	}while(op==2); //Si la oracion NO fue correcta, se repite el proceso
	
	ap=cad; //El apuntador se le asigna a la cadena

	while(*ap!='\0'){ // comenzara a hacerse el conteo de las letras, siempre y cuando sea diferentre de un espacio en blanco
		if(*ap=='a' || *ap=='e' || *ap=='i' || *ap=='o' || *ap=='u' || *ap=='A' || *ap=='E' || *ap=='I' || *ap=='O' || *ap=='U'){ //Si alguno de las letras son vocales, se suman a un contador, hay que recordar que los caracteres se ponen entre commilas solas
	voc++; //si cumple con la condicion, entonces de suma 
	}
	if(*ap=='A' || *ap == 'a')
		cona++; //ahora, yo quise que dijera cuantas tenia de cada vocal, asi que lo puse como mayuscula y minuscula, como no se pueden poner acentos, entonces solo puse esas dos opciones
	
	if(*ap=='E' || *ap == 'e')
		cone++; //Un contador individual para cada vocal
	
	if(*ap=='I' || *ap == 'i')
		coni++; //Ek contador individual de la vocal
	
	if(*ap=='O' || *ap == 'o')
		cono++; //El contador individual de la vocal
	
	if(*ap=='U' || *ap == 'u')
		conu++; //Contador individuall de la vocal
	
	ap++; //Se aumeta el apuntador para que vaya al siguiente espacio
	}
	
	printf("El numero de vocales es: %d",voc); //Se imprime el total numero de vocales
	printf("\n\t A: %d \n\t E: %d \n\t I: %d \n\t O: %d \n\t U: %d ",cona, cone, coni, cono, conu); //Y se imprime cuantas hubo de cada una
	
	system("pause");
	system("cls"); //Se limpia la pantalla
	
	
	//*****act 2 ****
	do{
		printf("Ingrese el primer numero: \n\t"); //Se pide el primer numero
		scanf("%d",&a); //se lee
		printf("Ingrese el segundo numero: \n\t"); //Se pide el segundo numero
		scanf("%d",&b); //se lee
		do{
			printf("\n\n Datos correctos [1-si/2-No]: \n\t"); //no esta de mas hacer la verificacion que sean datos correctos
			scanf("%d",&op);
		}while(op != 1 && op != 2); //Se asegura que no sea diferente a las dos opciones del menu
	}while(op==2); //MIentras los datos sean incorrectos se seguiran repitiendo
	
	apu=&a; //El apuntado apu tomara el valor de la variable a
	apun=&b; //El apuntador apun tomara el valor de la variable b
	apunt=&c; //El apuntador apunt tomara el valor de la variable c
	
	*apunt=*apu+*apun; //Se hae la suma con los apuntadores
	printf("\n\t %d \t + \t %d \t = \t %d \n\n\n\n\n\n",*apu, *apun, *apunt); //Se imprime el resultado y d euna vez dejo el espacio libre para la opracion final
	
	system("pause");
	
	return 0;
}
