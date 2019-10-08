#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ventasEmpleadoOficinaEdificio[6][10][2], i, j, f, op, ch, vi, vj, vf, Vent;
	
	
	//*******actividad1************
	
	printf("Formulario de ventas");
	
	for(f=0;f<2;f++){
		printf("\n\n\n");
		for(j=0;j<10;j++){
			printf("\n\n");
			do{
				for(i=0;i<6;i++){
					do{
						printf("Unidades vendidas por el empleado %d de la oficina no. %d del edificio no. %d: ",i+1,j+1,f+1); //Primero se solicita el numero de ventas del empleado
						fflush(stdin);
						scanf("%d",&ventasEmpleadoOficinaEdificio[i][j][f]);
					}while(ventasEmpleadoOficinaEdificio[i][j][f]<0);
				}
				do{
					printf("Datos Correctos [1-si/2-No]"); //Puse esta validacion para asegurarme de que de que si hay algun valor incorrecto se vuelvan a inducir los datos
					scanf("%d",&op);
				}while(op !=1 && op!=2); //Esta validacion es para asegurarme que unicamente haya dos opciones
			}while(op==2);
		}
	}
	
	system("cls");
	
	ventasEmpleadoOficinaEdificio[2][6][1]=4234;
	
	printf("\n\t\t\t Buscar empleado \n\t\t [1-si/2-No]"); //Este menu es para saber si se quiere saber de un solo empleado, o si quiere el reporte de todos
	scanf("%d",&ch);
	
	if(ch==1){
		do{
			printf("\n\t Ingrese el numero de empleado [1-6]: "); //Del 1 al 6 se hace el contador de empleados, como el contador es de 0 a 5, entonces se le resta una unidad
			scanf("%d",&i);	
			vi=i-1;
		}while(vi<0 || vi>6);
		do{
			printf("\n\t Ingrese el numero de oficina [1-10]: "); //Del 1 al 10 se hace el contador de empleados, como el contador es de 0 a 9, entonces se le resta una unidad
			scanf("%d",&j);	
			vj=j-1;
		}while(vj<0 || vj>6);
		do{
			printf("Ingrese el numero de Edificio [1-2]: ");//Del 1 al 2 se hace el contador de empleados, como el contador es de 0 a 1, entonces se le resta una unidad
			scanf("%d",&f);	
			vf=f-1;
		}while(vf<0 || vi>2);
		
		printf("\n\n\t El empleado %d de la oficina %d del edificio %d vendio %d unidades.", i, j, f, ventasEmpleadoOficinaEdificio[vi][vj][vf]);
	}
	
	else{
	
		for(f=0;f<2;f++){
			printf("\n\n\n");
			for(j=0;j<10;j++){
				printf("\n\n");
				for(i=0;i<6;i++){
					printf("\n\n\t Las unidades vendidas por el empleado %d de la oficina no. %d del edificio no. %d: %d",j+1,i+1,f+1, ventasEmpleadoOficinaEdificio[i][j][f]);
				}
			}
		}
	}
	
	printf("\n\n\n\n\n\n");
	
	system("cls");
	
	
	//*******actividad2************
	
	printf("Formulario de ventas");
	
	for(f=0;f<2;f++){
		printf("\n\n\n");
		for(j=0;j<10;j++){
			printf("\n\n");
			do{
				for(i=0;i<6;i++){
					do{
						printf("Unidades vendidas por el empleado %d de la oficina no. %d del edificio no. %d: ",i+1,j+1,f+1); //Primero se solicita el numero de ventas del empleado
						fflush(stdin);
						scanf("%d",&Vent);
						ventasEmpleadoOficinaEdificio[i][j][f]=Vent+10;
					}while(ventasEmpleadoOficinaEdificio[i][j][f]<0);
				}
				do{
					printf("Datos Correctos [1-si/2-No]"); //Puse esta validacion para asegurarme de que de que si hay algun valor incorrecto se vuelvan a inducir los datos
					scanf("%d",&op);
				}while(op !=1 && op!=2); //Esta validacion es para asegurarme que unicamente haya dos opciones
			}while(op==2);
		}
	}
	
	system("cls");
	
	ventasEmpleadoOficinaEdificio[2][6][1]=4234+10;
	
	printf("\n\t\t\t Buscar empleado \n\t\t [1-si/2-No]"); //Este menu es para saber si se quiere saber de un solo empleado, o si quiere el reporte de todos
	scanf("%d",&ch);
	
	if(ch==1){
		do{
			printf("\n\t Ingrese el numero de empleado [1-6]: "); //Del 1 al 6 se hace el contador de empleados, como el contador es de 0 a 5, entonces se le resta una unidad
			scanf("%d",&i);	
			vi=i-1;
		}while(vi<0 || vi>6);
		do{
			printf("\n\t Ingrese el numero de oficina [1-10]: "); //Del 1 al 10 se hace el contador de empleados, como el contador es de 0 a 9, entonces se le resta una unidad
			scanf("%d",&j);	
			vj=j-1;
		}while(vj<0 || vj>6);
		do{
			printf("Ingrese el numero de Edificio [1-2]: ");//Del 1 al 2 se hace el contador de empleados, como el contador es de 0 a 1, entonces se le resta una unidad
			scanf("%d",&f);	
			vf=f-1;
		}while(vf<0 || vi>2);
		
		printf("\n\n\t El empleado %d de la oficina %d del edificio %d vendio %d unidades.", i, j, f, ventasEmpleadoOficinaEdificio[vi][vj][vf]);
	}
	
	else{
	
		for(f=0;f<2;f++){
			printf("\n\n\n");
			for(j=0;j<10;j++){
				printf("\n\n");
				for(i=0;i<6;i++){
					printf("\n\n\t Las unidades vendidas por el empleado %d de la oficina no. %d del edificio no. %d: %d",j+1,i+1,f+1, ventasEmpleadoOficinaEdificio[i][j][f]);
				}
			}
		}
	}
	
	printf("\n\n\n\n\n\n");
	
	
	system("pause");
	return 0;
}
