#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, lon, suma, a, b;
	FILE *Archivo;
	FILE *entrada;
	FILE *Archivo_alreves;
	char cad[100];
	char inv[100];

	Archivo=fopen("Archivo.txt", "w");

	if(Archivo != NULL)
 	{
 		printf("Ingrese una cadena:  ");
		fflush(stdin);
		gets(cad);
		fprintf(Archivo, "%s", cad);
	}
	else{
		printf("Estoy entrando al else");
		exit(1);
	}
fclose(Archivo);
Archivo_alreves=fopen("Archivo_alreves.txt","w");
    char temporal[' '];
	lon= strlen(cad);
    for (i=lon; i>=0;i--){
		for (j=0; j<1 ;j++){
			temporal[j]= cad[i];
			fflush(stdin);
		}
		printf ( "%s", temporal );
		
	fprintf(Archivo_alreves,"\n\n La palabra alreves es \n PROCESADO  %s",temporal);
		
	}
	fclose(Archivo_alreves);
printf("\n\n %s",cad);

printf("\n\n\n");

//***********actividad2*****
 if ((entrada = fopen("Valores.txt", "r")) == NULL)
      return EXIT_FAILURE;
   
      fscanf(entrada, "%d %d", &a, &b);
      suma=a+b;
         
   fclose(entrada);
   
   printf("La suma de a y b es: %d\n", suma);
   printf("\n\n\n");
system("pause");

return 0;
}



