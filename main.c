#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void lectura(archivo);
int main(int argc, char *argv[]) {
	FILE *archivo;

	char cad[100], inv[100];

	archivo=fopen("archivoOriginal.txt", "w");

	if(archivo != NULL)
 	{
 		printf("Ingrese una cadena:  ");
		fflush(stdin);
		gets(cad);
		fprintf(archivo, "%s", cad);
	}
	else{
		printf("Estoy entrando al else");
		exit(1);
	}
fclose(archivo);

invertir(cad);

printf("\n\n\n");
system("pause");
return 0;
}

char invertir(char cad[100]) {
	int i,j, longitud;
    char temporal[' '];
	longitud= strlen(cad);
    for (i=longitud; i>=0;i--){
	for (j=0; j<longitud ;j++) {

	temporal[j]= cad[i];
}
printf ( "%s" , temporal );
}
printf("%s", cad);
  return cad[100];
}

