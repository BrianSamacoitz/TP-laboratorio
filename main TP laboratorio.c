#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int reservasize;
int size;
void** elements;

//funciones
void (*add)();     
}arraylist;

#include "libreria.h"
int main(int argc, char *argv[])
{
  arraylist* auxArrayList;
  int menu;
  int auxelements;
  
  
do{    
  printf("\t\tTP Laboratorio\n\n");
  printf("1-Crear lista nueva\n2-Eliminar Lista\n3-Agregar elemento\n4-Eliminar elemento\n");
  printf("5-Agregar elemento en tal indice\n6-Retornar un puntero\n7-Desplazar los elementos\n");
  scanf("%d",&menu);
  
  switch(menu)
  {
   case 1:
          auxArrayList=NewArrayList();
          printf("Se creo una nueva lista");
          
   break;
   case 2:
   break;
   case 3:
          printf("Ingrese elemento a agregar");
          scanf("%d",&auxelements);
          auxArrayList->add(auxArrayList,auxelements);
   break;
          
             
  }
system("CLS");  
}while(menu!=0);
  
  system("PAUSE");  	
  return 0;
}
