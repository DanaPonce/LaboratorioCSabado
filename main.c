/*
Author: Dana Elizabeth Ponce del Angel
Fecha: 31 de Agosto 2019
gurpo:008
horario: Sabado 9-11 am
Matricula: 1868698
*/

#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int n1, n2, a=5, b=3, c=-2, d=0, e=0, f=0, g=0, h=0;

//*** ACT1
	printf("Ingrese un numero: ");
	scanf("%f",&n1);
	printf("Ingrese un numero: ");
	scanf("%f",&n2);
	
	/*Primero deben ingresarse los numeros por el teclado, para poder llevar a cabo las operaciones*/
	
	if(n1>n2){
		printf("\n El mayor es: n1 \n\n\n");
	}
	else{
		printf("\n El mayor es: n2 \n\n\n");
	}


	system("pause");

//*** ACT2
	d= a*b;
	e= c/b;
	f= a+b+c;
	g= a+b;
	h= a-b;
	
	/*
	Este paso es mas complicado, en la actividad pasada le dimos los valores solicitados en la actividad a las varibes a b y c
	*/
	
	/*
	Pero eso no es lo unico, debido a que no se pueden realizar operaciones en el if, deben ser declaradas antes
	*/
	
	/*
	Son 5 operaciones extras las que deben llevarse a cabo, asi se crearan nuevas variables, cuyos valores sean los resultados 
	solicitados para llevar a cabo las funciones
	*/

	if(a>3){
		printf("(a>3)");
		printf("\n Es verdadero \n\n");
}
	else{
		printf("(a>3)");
	printf("\n Es falso\n\n");
}
	/* Primero deben comparen los valores a sea mayor que 3, debido a que el valor ya esta definido, sabemos que es falso */
	
	if(a>c){
		printf("(a>c)");
	printf("\n Es verdadero\n\n");
}
	else{
		printf("(a>c)");
	printf("\n Es falso \n\n");
}
	/* Se compara que a sea mayor que c, los valores ya estan establecidos*/
	
	if(b != c){
		printf("(b != c)");
	printf("\n Es correcto\n\n");
}
	else{
		printf("(b != c)");
	printf("\n Es falso");
}
	/*Se busca que los valores de b y c sean distintos */

	if(a == 3){
		printf("(a == 3)");
	printf("\n Es verdadero \n\n");
}
	else{
		printf("(a == 3)");
	printf("\n Es falso \n\n");
}
	/*Se comparan los valores de a para sabes si es igual que 3 */

	if(d == 15){
	printf("(d == 15)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(d == 15)");
	printf("\n Es Falso \n\n");
}
	/* Se busca saber que d sea igual a 15 */

	if(e < a){
		printf("(e < a)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(e < a)");
	printf("\n Es falso \n\n");
}
	/* AL inicio, se  calculo el valor de e, y se calcula para saber si es menor que a*/
	
	if(e == -10){
		printf("(e == -10)");
	printf("\n Es correcto \n\n");
}
	else{
		printf("(e == -10)");
	printf("\n Es falso \n\n");
}
	/* Se calcula que el valor de e, que fue calculado al parincipio, sea igual que -10 */
	
	if(f == 5){
		printf("(f == 5)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(f == 5)");
	printf("\n Es Falso \n\n");
}
	/* Se compara el valor de f con 5 para saber si es verdad o no*/

	if(g == 8 && h == 2){
		printf("(g == 8 && h == 2)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(g == 8 && h == 2)");
	printf("\n Es falso \n\n");
}
	/*Aqui deben hacerse dos operaciones, así que se hacer de izquiera a derecha, se compara el valor de g para saber
	si es igual a 8, despues el valor de h paa saber si es igual a 2, despues se compara. Si ambos son verdadero entonces la respuesta
	sera verdadera, de lo contrario sera considerado falso*/

	if(g == 8 || h == 6){
		printf("(g == 8 || h == 6)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(g == 8 || h == 6)");
	printf("\n Es falso \n\n");
}
	/*Igual que en el caso anterior se comparan los valores, esta vez g con 8 y h igual a 6, solamente que ambas deben ser negativas
	para que ambas lo sean, de lo contrario sera considerado como verdadero*/
	if(a > 3 && b > 3 && c < 3){
		printf("(a > 3 && b > 3 && c < 3)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(a > 3 && b > 3 && c < 3)");
	printf(" \n Es falso \n\n");
} 

	/*Aqui deben hacerse tres operaciones, así que se hacer de izquiera a derecha, se compara el valor de a para saber
	si es mayor que 3, despues el valor de b para saber si es mayor a 3, despues con c para saber si es menor que 3, despues 
	se compara. Si los tres son verdadero entonces la respuesta sera verdadera, de lo contrario sera considerado falso*/

	system("pause");

//**** ACTEXTRA
	
	printf("\n Ingrese un valor para a :  \n\n");
	scanf("%d",&a);
	printf("\n Ingrese un valor para b:  \n\n");
	scanf("%d",&b);
	printf("\n Ingrese un valor para c:  \n\n");
	scanf("%d",&c);
	
	/*En este caso, los valores seran ingresados por el teclado, no es necesario volver a declarar las variables, ya que su valor cambiara automaticamente*/

	d= a*b;
	e= c/b;
	f= a+b+c;
	g= a+b;
	h= a-b;

	/*
	Este paso es mas complicado, en la actividad pasada le dimos los valores solicitados en la actividad a las varibes a b y c, pero como mencione, 
	los valores seran cambiados
	*/
	
	/*
	Pero eso no es lo unico, debido a que no se pueden realizar operaciones en el if, deben ser declaradas antes con otros valores
	*/
	
	/*
	Son 5 operaciones extras las que deben llevarse a cabo, asi se crearan nuevas variables, cuyos valores sean los resultados 
	solicitados para llevar a cabo las funciones
	*/

	if(a>3){
		printf("(a>3)");
		printf("\n Es verdadero \n\n");
}
	else{
		printf("(a>3)");
	printf("\n Es falso \n\n");
}
	/* Primero deben comparen los valores a sea mayor que 3, debido a que el valor ya esta definido, sabemos que es falso */
	
	if(a>c){
		printf("(a>c)");
	printf("\n Es verdadero \n\n");
}
	else{
		printf("(a>c)");
	printf("\n Es falso \n\n");
}
	/* Se compara que a sea mayor que c, los valores ya estan establecidos*/
	
	if(b != c){
		printf("(b != c)");
	printf("\n Es correcto \n\n");
}
	else{
		printf("(b != c)");
	printf("\n Es falso \n\n");
}
	/*Se busca que los valores de b y c sean distintos */

	if(a == 3){
		printf("(a == 3)");
	printf("\n Es verdadero \n\n");
}
	else{
		printf("(a == 3)");
	printf("\n Es falso \n\n");
}
	/*Se comparan los valores de a para sabes si es igual que 3 */

	if(d == 15){
		printf("(d == 15)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(d == 15)");
	printf("\n Es Falso \n\n");
}
	/* Se busca saber que d sea igual a 15 */

	if(e < a){
		printf("(e < a");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(e < a");
	printf("\n Es falso \n\n");
}
	/* AL inicio, se  calculo el valor de e, y se calcula para saber si es menor que a*/
	
	if(e == -10){
		printf("(e == -10)");
	printf("\n Es correcto \n\n");
}
	else{
		printf("(e == -10)");
	printf("\n Es falso \n\n");
}
	/* Se calcula que el valor de e, que fue calculado al parincipio, sea igual que -10 */
	
	if(f == 5){
		printf("(f == 5)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(f == 5)");
	printf("\n Es Falso \n\n");
}
	/* Se compara el valor de f con 5 para saber si es verdad o no*/

	if(g == 8 && h == 2){
		printf("(g == 8 && h == 2)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(g == 8 && h == 2)");
	printf("\n Es falso \n\n");
}
	/*Aqui deben hacerse dos operaciones, así que se hacer de izquiera a derecha, se compara el valor de g para saber
	si es igual a 8, despues el valor de h paa saber si es igual a 2, despues se compara. Si ambos son verdadero entonces la respuesta
	sera verdadera, de lo contrario sera considerado falso*/

	if(g == 8 || h == 6){
	printf("(g == 8 || h == 6");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(g == 8 || h == 6");
	printf("\n Es falso \n\n");
}
	/*Igual que en el caso anterior se comparan los valores, esta vez g con 8 y h igual a 6, solamente que ambas deben ser negativas
	para que ambas lo sean, de lo contrario sera considerado como verdadero*/
	if(a > 3 && b > 3 && c < 3){
		printf("(a > 3 && b > 3 && c < 3)");
	printf("\n Es Verdadero \n\n");
}
	else{
		printf("(a > 3 && b > 3 && c < 3)");
	printf(" \n Es falso \n\n");
} 

	/*Aqui deben hacerse tres operaciones, así que se hacer de izquiera a derecha, se compara el valor de a para saber
	si es mayor que 3, despues el valor de b para saber si es mayor a 3, despues con c para saber si es menor que 3, despues 
	se compara. Si los tres son verdadero entonces la respuesta sera verdadera, de lo contrario sera considerado falso*/

	system("pause");

	return 0;
}
