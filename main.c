#include <stdio.h>
#include <stdlib.h>

/*
Author: Dana Elizabeth Ponce del Angel
Fecha: 31 de Agosto 2019
gurpo:008
horario: Sabado 9-11 am
Matricula: 1868698
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int n1, n2, a=5, b=3, c=-2, d, e, f, g, h;

//*** ACT1
	printf("Ingrese un numero");
	scanf("%f",&n1);
	printf("Ingrese un numero");
	scanf("%f",&n2);
	if(n1>n2){
		printf("n1 es mayor");
	}
	else{
		printf("n1 es menor");
	}




//*** ACT2
	d= a*b;
	e= c/b;
	f= a+b+c;
	g= a+b;
	h= a-b;



	if(a>3){
		printf("\n Es verdadero");
}
	else{
	printf("\n Es falso");
}
	if(a>c){
	printf("\n Es verdadero");
}
	else{
	printf("\n Es falso");
}
	if(b != c){
	printf("\n Es correcto");
}
	else{
	printf("\n Es falso");
}

	if(a == 3){
	printf("\n Es verdadero");
}
	else{
	printf("\n Es falso");
}
	if(d == 15){
	printf("\n Es correcto");
}
	else{
	printf("\n Es Falso");
}
	if(e < a){
	printf("\n Es correcto");
}
	else{
	printf("\n Es falso");
}
	if(e == -10){
	printf("\n Es correcto");
}
	else{
	printf("\n Es falso");
}
	if(f == 5){
	printf("\n Es correcto");
}
	else{
	printf("\n Es Falso");
}
	if(g == 8 && h == 2){
	printf("\n Es Verdadero");
}
	else{
	printf("\n Es falso");
}
	if(g == 8 || h == 6){
	printf("\n Es correcto");
}
	else{
	printf("\n Es falso");
}
	if(a > 3 && b > 3 && c < 3){
	printf("\n Es correcto");
}
	else{
	printf(" \n Es falso");
} 


//**** ACTEXTRA
	
	printf("\n Ingrese un valor para a: ");
	scanf("%d",&a);
	printf("\n Ingrese un valor para b: ");
	scanf("%d",&b);
	printf("\n Ingrese un valor para c: ");
	scanf("%d",&c);

	d= a*b;
	e= c/b;
	f= a+b+c;
	g= a+b;
	h= a-b;

	if(a>3){
		printf("\n\n Es verdadero");
}
	else{
	printf("\n\n Es falso");
}
	if(a>c){
	printf("\n\n Es verdadero");
}
	else{
	printf("\n\n Es falso");
}
	if(b != c){
	printf("\n\n Es Verdadero");
}
	else{
	printf("\n\n Es falso");
}

	if(a == 3){
	printf("\n\n Es verdadero");
}
	else{
	printf("\n\n Es falso");
}
	if(d == 15){
	printf("\n\n Es Verdadero");
}
	else{
	printf("\n\n Es Falso");
}
	if(e < a){
	printf("\n\n Es correcto");
}
	else{
	printf("\n\n Es falso");
}
	if(e == -10){
	printf("\n\n Es Verdadero");
}
	else{
	printf("\n\n Es falso");
}
	if(f == 5){
	printf("\n\n Es verdadero");
}
	else{
	printf("\n\n Es Falso");
}
	if(g == 8 && h == 2){
	printf("\n\n Es Verdadero");
}
	else{
	printf("\n\n Es falso");
}
	if(g == 8 || h == 6){
	printf("\n\n Es correcto");
}
	else{
	printf("\n\n Es falso");
}
	if(a > 3 && b > 3 && c < 3){
	printf("\n\n Es correcto");
}
	else{
	printf(" \n\n Es falso");
} 
 

	return 0;
}
