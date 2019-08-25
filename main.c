/*
Dana Elizabeth Ponce Del Angel
24 Agosto 2019
Grupo 008
Horario Sabado de 9am a 11am
matricula 1868698
*/

#include<stdio.h>

int main()
{
	int e1, e2, e3, e4, e5, x;
printf("Ingrese un numero del 1 al 10: ");
scanf("%d",&x);
e1=(x-1)/4-(x-5)/36;
e2=6*((x+1)/8-(2*x-3)/16);
e3=2/3*(x-(1-(x-2)/3))+1;
e4=2-(-2*(x+1)-(x-3)/2);

printf("\n La primera ecuacion tiene un resultado de %d \n",e1);
printf("\n\n La primera ecuacion tiene un resultado de %d \n\n",e2);
printf("\n\n La primera ecuacion tiene un resultado de %d \n\n",e3);
printf("\n\n La primera ecuacion tiene un resultado de %d \n\n",e4);

system("pause");
}
