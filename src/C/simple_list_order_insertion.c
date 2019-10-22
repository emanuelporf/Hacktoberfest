#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct nod{
    int dato;
    struct nod *sig;
}Nodo;

Nodo* creaNodo(int d);
int insOrd(Nodo **cab, int dato);
void imprimir(Nodo *cab);

int main(){
    Nodo *list=NULL;
    int dato;
    int cm;
    int tecla;
    while(kbhit()!=27 && tecla!=27){
    	system("cls");
    	printf("Selecciona una opcion(Esc para salir)\n");
    	printf("1.- Insertar dato\n");
    	printf("2.- Imprimir");
    	tecla=getch();
    	if(tecla==49){
    		system("cls");
    		printf("Dame un dato");
    		scanf("%d,",&dato);
    		cm=insOrd(&list,dato);
    		if(cm==1){
    			printf("Dato insertado");
			}else{
				printf("Dato no insertado");
			}
		}
		if(tecla==50){
			system("cls");
			imprimir(list);
		}
	}
    return 0;
}

Nodo* creaNodo(int d){
    Nodo *nuevo;
    nuevo = (Nodo*)malloc(sizeof(Nodo));
    if(nuevo){
        nuevo->dato=d;
        nuevo->sig=NULL;
    }
    return nuevo;
}

int insOrd(Nodo **cab, int dato){
    Nodo *nuevo,*aux,*aux2;
    nuevo=creaNodo(dato);
    if(nuevo){
        if(!*cab){
            *cab=nuevo;
        }else{
            for(aux=aux2=*cab;aux2 && nuevo->dato>aux2->dato;aux=aux2,aux2=aux2->sig);
            if(aux2==*cab){
                nuevo->sig=*cab;
                *cab=nuevo;
            }else{
                aux->sig=nuevo;
                nuevo->sig=aux2;
            }
        }
        return 1;
    }
    return 0;
}

void imprimir(Nodo *cab){
    Nodo *aux;
    if(!cab){
    	printf("No hay datos");
	}
	else{
		for(aux=cab;aux;aux=aux->sig){
			printf("%d",aux->dato);
			getch();
		}
	}
}
