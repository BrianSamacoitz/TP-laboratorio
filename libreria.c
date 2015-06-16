typedef struct arraylist
{
int reservasize;
int size;
void** elements;        
}arraylist;

#include "libreria.h"

arraylist* NewArrayList()
{
arraylist* auxlist;
  
auxlist=(arraylist*)malloc(sizeof(arraylist));
auxlist->size=0;
return auxlist;
}

void add(arraylist* auxlist,void* elemento)
{
auxlist->elements=(arraylist*)malloc(sizeof(auxlist->elements));
auxlist->elements[auxlist->size+1]=elemento;

auxlist->elements=realloc(auxlist->elements,sizeof(auxlist->elements)*2);
}
