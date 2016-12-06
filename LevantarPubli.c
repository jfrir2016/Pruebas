#include "TPO.h"

int LoadPubli (NodePost **primero,char *archivo)
{
  FILE *fd;
  NodePost *aux;
  POST *datos;
  
  if((fd=fopen(archivo,"r"))==NULL)
    return 1;
  aux=(NodePost*)malloc(sizeof(NodePost));
  datos=&(aux->post);
  fread(datos,sizeof(POST),1,fd);
  if(feof(fd))
  {
    free(aux);
    return 0;
  }
  *primero=aux;
  while(!feof(fd))
  {
    aux->nxt=(NodePost*)malloc(sizeof(NodePost));
    aux=aux->nxt;
    datos=&(aux->post);
    fread(datos,sizeof(POST),1,fd);
  }
  fclose(fd);
  aux->nxt=NULL;
  return 0; 
}

  
  