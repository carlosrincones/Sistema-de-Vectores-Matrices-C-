#include "iostream"
#include "stdlib.h"
#include "conio.h"
#include "windows.h"
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
	int matriz[100][100];
	
	int filas,columnas,op,op3,op1,n,vec1[100],vec2[100],vt[100],aux = 0;
	gotoxy(65,0);printf("INSTITUTO UNIVERSITARIO POLITECNICO SANTIAGO MARINO");
	gotoxy(65,1);printf("MINISTERIO DEL PODER POPULAR PARA LA EDUCACION");
	gotoxy(65,2);printf("Alumno: CARLOS RINCONES C.I:31782362");
	gotoxy(65,3);printf("Segundo Semestre");
	gotoxy(65,4);printf("Escuela #47 (INGENIERIA DE SISTEMAS)\n");
	gotoxy(65,5);printf("Pulse una tecla para continuar..");
	getch();
	system("cls");
	do{
	system("cls");
	printf("BUENOS DIAS PROFESOR YVAN SALAZAR \nCON QUE LE GUSTARIA TRABAJAR EL DIA DE HOY \nA CONTINUACION LE MOSTRAREMOS UN MENU EN EL QUE APARECERAN LAS DISTINTAS OPCIONES DISPONIBLES\n\t MENU");
	printf("\n1. Vectores [1]");
	printf("\n2. Matrices [2]");
	printf("\n3. Salir    [3]");
	printf("\nSeleccione una opcion dentro del Rango [1, 2, 3] (PULSE UNA TECLA) ..:\n ");
	scanf("%d",& op); 
	switch(op){
	case 1:
	system("cls");
	printf("Usted eligio vectores [Pulse Una Tecla para Continuar]");getch();system("cls"); 
	do{
	system("cls");
	printf("A continuacion le mostraremos un menu en el cual usted podra seleccionar distintas opciones disponibles");
    printf("\n1.Cargar Vector           [1]");
    printf("\n2.Sumar y ordenar vector  [2]");
    printf("\n3.Volver a menu principal [3]");
    printf("\nSeleccione una opcion dentro del Rango [1, 2, 3] (PULSE UNA TECLA) ..:\n");
	scanf("%d",& op1);
	switch(op1){
	case 1:
	system("cls");
	printf("Usted ha elegido Cargar vector");
	printf("\nDigite la cantidad de datos a ingresar en el vector(No tiene que ser menor que 1 ni mayor que 10):");
	scanf("%d",& n);
	while(n < 1||n > 10){
	printf("Cantidad no valida!");
	printf("\nDigite la cantidad de datos a ingresar en el vector(No tiene que ser menor que 1 ni mayor que 10):");
	scanf("%d",& n);
	}
	system("cls");
	for(int i = 0 ;i < n;i++){
	printf("\nDigite el valor (%d) del vector 1: ",i+1);
	scanf("%d",& vec1[i]);
	}
	for(int i = 0;i < n;i++){
	printf("\nDigite el valor (%d) del vector 2: ",i+1);
	scanf("%d",& vec2[i]);
	}
	system("cls");
	printf("\n Vector 1\tVector 2");
	for(int i = 0; i < n;i++){
	printf("\n%d\t\t%d ",vec1[i],vec2[i]);
	}
	getch();
	break;
	case 2:
	cout<<endl;
	printf("\nUsted ha elegido sumar y ordenar vector");
	printf("\n Vector 1\tVector 2");
	for(int i = 0; i < n;i++){
	printf("\n %d\t\t%d ",vec1[i],vec2[i]);
	}
	for(int i = 0;i < n ;i++){
	vt[i]= vec1[i] + vec2[i];
	}
	for(int i = 0; i < n;i++){
		for (int j = (i+1);j < n;j++){
		if (vt[i] > vt[j]){
		aux = vt[i];
		vt[i] = vt[j];
		vt[j] = aux;
		}
		}
	}
	cout<<"\nLa forma Ascendente seria";
	for(int i = 0; i < n;i++){
	printf("\n %d",vt[i]);
	}
	cout<<endl;
	for(int i = 0;i < n;i++){
		for (int j = (i+1); j < n;j++){
		if (vt[i] < vt[j]){
		aux = vt[i];
		vt[i] = vt[j];
		vt[j] = aux;
		}
		}
	}
	cout<<"\nLa forma descendente seria";
	for(int i = 0; i < n;i++){
	printf("\n %d",vt[i]);
	}
	break;
	case 3:
	system("cls");return main();
	break;
 	}
 	getch();
	}while(op1 != 4 || op1 != 0);
	break;
	case 2:
	system ("cls");
	printf("Usted eligio matrices [Pulse una tecla para continuar] ");getch();system("cls");
	
	do{
	printf("Introduzca la cantidad de filas que va a tener su matriz: ");
	scanf("%d",& filas);
	printf("Introduzca la cantidad de columnas que va a tener su matriz: ");
	scanf("%d",& columnas);
	
	if (filas != columnas){
	printf("!!!ERROR!!!Introduzca la misma cantidad de filas que de columnas para que esta sea una matriz cuadrada\n");getch();
	system("cls");
	}
	}while(filas != columnas);
	for(int i = 0; i < filas;i++){
		for(int j = 0 ;j < columnas;j++){
		printf("Introduzca un numero [a%d][a%d]: ",i+1,j+1);
		scanf("%d",& matriz[i][j]);
		}
	}cout<<"\nSu Matriz es la siguiente:"; cout<<endl;
	for(int i = 0;i < filas;i++){
		for(int j = 0;j < columnas;j++){
			printf(" %d ",matriz[i][j]);
		}cout<<endl;
	}cout<<endl;
	do{
	printf("A continuacion le mostraremos un menu en el cual usted podra seleccionar distintas opciones disponibles\n");
	printf("\n1. Mostrar diagonal principal  [1]\n");
	printf("\n2. Mostrar diagonal secundaria [2]\n");
	printf("\n3. Ordenar matriz              [3]\n");
	printf("\n4. Volver al inicio   	       [4]\n");
	printf("\nSeleccione una opcion dentro del Rango [1, 2, 3, 4] (PULSE UNA TECLA) ..:\n ");
	scanf("%d",& op3);

	switch(op3){
	case 1:
	cout<<"\nEsta es su matriz:"; cout<<endl;
	for(int i = 0;i < filas;i++){
		for(int j = 0;j < columnas;j++){
			printf(" %d ",matriz[i][j]);
		}cout<<endl;
	}cout<<endl;
	cout<<"\nLa diagonal principal es:";
	cout<<endl;
	for(int i = 0 ; i < filas;i++){
	printf("%d ",matriz[i][i]);
	}
	printf("\n");getch(); system("cls");
	break;
	case 2:
	cout<<"\nEsta es su matriz:"; cout<<endl;
	for(int i = 0;i < filas;i++){
		for(int j = 0;j < columnas;j++){
			printf(" %d ",matriz[i][j]);
		}cout<<endl;
	}cout<<endl;
	cout<<"\nLa diagonal secundaria es: ";
	cout<<endl;
	for(int i = 0; i < filas;i++){
	printf("%d ",matriz[i][filas - 1 - i]);
	}
	printf("\n");getch(); system("cls");
	break;
	case 3:
    printf("No esta disponible esta opcion hasta nuevo aviso...");
    getch();system("cls");break;
	case 4:
	getch();
	system("cls");
	return main() ;
	}system("cls");
	}while(op != 4 || op != 0);
	break;
	case 3:
	system("cls");
	printf("HASTA LUEGO PROFESOR FUE UN PLACER ATENDERLO....");
	break;
	}

 }while(op > 3 || op == 0 || op < 0);



 return 0;
}

