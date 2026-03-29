#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

 
void mostrarVectores(int vec1[], int vec2[], int n) {
    system("cls");
    printf("\n Vector 1\tVector 2\n");
    printf("------------------------\n");
    for(int i = 0; i < n; i++){
        printf("   %d\t\t%d\n", vec1[i], vec2[i]);
    }
}

 
void sumarYOrdenar(int vec1[], int vec2[], int n) {
    int vt[100];
    
     
    for(int i = 0; i < n; i++){
        vt[i] = vec1[i] + vec2[i];
    }
    
   
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(vt[i] > vt[j]){
                int aux = vt[i];
                vt[i] = vt[j];
                vt[j] = aux;
            }
        }
    }
    printf("\nASCENDENTE:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", vt[i]);
    }
    
     
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(vt[i] < vt[j]){
                int aux = vt[i];
                vt[i] = vt[j];
                vt[j] = aux;
            }
        }
    }
    printf("\nDESCENDENTE:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", vt[i]);
    }
}

int main(){
    int matriz[10][10];   
    int filas, columnas, op, op1, op3, n;
    int vec1[10], vec2[10], vt[10];   
    
     
    gotoxy(65,0); printf("INSTITUTO UNIVERSITARIO POLITECNICO SANTIAGO MARINO");
    gotoxy(65,1); printf("MINISTERIO DEL PODER POPULAR PARA LA EDUCACION");
    gotoxy(65,2); printf("Alumno: CARLOS RINCONES C.I:31782362");
    gotoxy(65,3); printf("Segundo Semestre");
    gotoxy(65,4); printf("Escuela #47 (INGENIERIA DE SISTEMAS)");
    gotoxy(65,5); printf("Pulse una tecla para continuar..");
    getch();
    system("cls");
    
    
    do {
        system("cls");
        printf("=== MENU PRINCIPAL ===\n");
        printf("1. Vectores [1]\n");
        printf("2. Matrices [2]\n");
        printf("3. Salir    [3]\n");
        printf("Opcion [1-3]: ");
        scanf("%d", &op);
        
        if(op == 1) {
            
            system("cls");
            printf("Usted eligio vectores [Pulse Una Tecla]"); getch(); system("cls");
            
            do {
                system("cls");
                printf("=== MENU VECTORES ===\n");
                printf("1. Cargar Vector     [1]\n");
                printf("2. Sumar y ordenar   [2]\n");
                printf("3. Volver            [3]\n");
                printf("Opcion [1-3]: ");
                scanf("%d", &op1);
                
                switch(op1) {
                    case 1:
                        system("cls");
                        printf("CARGAR VECTOR\n");
                        printf("Cantidad (1-10): ");
                        scanf("%d", &n);
                        
                        
                        while(n < 1 || n > 10) {
                            printf("ERROR: 1-10: ");
                            scanf("%d", &n);
                        }
                        
                        
                        for(int i = 0; i < n; i++){
                            printf("Vector 1 [%d]: ", i+1);
                            scanf("%d", &vec1[i]);
                        }
                        for(int i = 0; i < n; i++){
                            printf("Vector 2 [%d]: ", i+1);
                            scanf("%d", &vec2[i]);
                        }
                        mostrarVectores(vec1, vec2, n);
                        break;
                        
                    case 2:
                        if(n == 0) {
                            printf("Primero cargue vectores!\n");
                        } else {
                            system("cls");
                            printf("SUMA Y ORDENAMIENTO\n");
                            mostrarVectores(vec1, vec2, n);
                            sumarYOrdenar(vec1, vec2, n);
                        }
                        getch();
                        break;
                        
                    case 3:
                        op1 = 3;  
                        break;
                }
            } while(op1 != 3);  
        }
        
        else if(op == 2) {
            
            system("cls");
            printf("Usted eligio matrices [Pulse una tecla]"); getch(); system("cls");
            
            
            do {
                printf("Filas (1-10): ");
                scanf("%d", &filas);
                printf("Columnas (1-10): ");
                scanf("%d", &columnas);
                
                if(filas != columnas || filas > 10 || filas < 1) {
                    printf("ERROR: Matriz cuadrada 1x1 a 10x10\n");
                    getch(); system("cls");
                }
            } while(filas != columnas || filas > 10 || filas < 1);
            
            
            for(int i = 0; i < filas; i++) {
                for(int j = 0; j < columnas; j++) {
                    printf("matriz[%d][%d]: ", i+1, j+1);
                    scanf("%d", &matriz[i][j]);
                }
            }
            
            
            system("cls");
            printf("MATRIZ %dx%d:\n", filas, columnas);
            for(int i = 0; i < filas; i++) {
                for(int j = 0; j < columnas; j++) {
                    printf("%4d ", matriz[i][j]);
                }
                printf("\n");
            }
            
            
            do {
                system("cls");
                printf("=== MENU MATRIZ %dx%d ===\n", filas, columnas);
                printf("1. Diagonal Principal  [1]\n");
                printf("2. Diagonal Secundaria [2]\n");
                printf("3. Volver              [3]\n");
                printf("Opcion [1-3]: ");
                scanf("%d", &op3);
                
                switch(op3) {
                    case 1:
                        printf("\nMATRIZ:\n");
                        for(int i = 0; i < filas; i++) {
                            for(int j = 0; j < columnas; j++) {
                                printf("%4d ", matriz[i][j]);
                            }
                            printf("\n");
                        }
                        printf("\nDIAGONAL PRINCIPAL: ");
                        for(int i = 0; i < filas; i++) {
                            printf("%d ", matriz[i][i]);
                        }
                        getch(); system("cls");
                        break;
                        
                    case 2:
                        printf("\nMATRIZ:\n");
                        for(int i = 0; i < filas; i++) {
                            for(int j = 0; j < columnas; j++) {
                                printf("%4d ", matriz[i][j]);
                            }
                            printf("\n");
                        }
                        printf("\nDIAGONAL SECUNDARIA: ");
                        for(int i = 0; i < filas; i++) {
                            printf("%d ", matriz[i][filas-1-i]);
                        }
                        getch(); system("cls");
                        break;
                        
                    case 3:
                        op3 = 3;  
                        break;
                }
            } while(op3 != 3);
        }
        
        else if(op == 3) {
            system("cls");
            printf("HASTA LUEGO FUE UN PLACER.\n");
        }
        
        else {
            printf("Opcion invalida!\n");
            getch();
        }
    } while(op != 3);  
    
    return 0;
}
