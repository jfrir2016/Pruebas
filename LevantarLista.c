#include "TPO.h"

int LoadUsuarios (NodeUser **primero,char *archivo)
{
  FILE *fd;
  NodeUser *aux;
  USU *datos;
  
  if((fd=fopen(archivo,"r"))==NULL)
    return 1;
  aux=(NodeUser*)malloc(sizeof(NodeUser));
  datos=&(aux->user);
  fread(datos,sizeof(USU),1,fd);
  if(feof(fd))
  {
    free(aux);
    return 0;
  }
  *primero=aux;
  while(!feof(fd))
  {
    aux->nxt=(NodeUser*)malloc(sizeof(NodeUser));
    aux=aux->nxt;
    datos=&(aux->user);
    fread(datos,sizeof(USU),1,fd);
  }
  fclose(fd);
  aux->nxt=NULL;
  return 0;
}
