#include "TPO.h"

int LoadComments (NodePost **primero)
{
  FILE *fd;
  NodeComment *aux,*first;
  NodePost *read;
  COMMT *datos;
  char Archivo[8];
  
  if(*primero==NULL)
    return 0;
  for(read=*primero;read!=NULL;read=read->nxt)
  {
    sprintf(Archivo,"%d.c",read->post.id);
    
    if((fd=fopen(Archivo,"r"))==NULL)
      return 1;
    
    aux=(NodeComment*)malloc(sizeof(NodeComment));
    first=aux;
    datos=&(aux->comentario);
    fread(datos,sizeof(COMMT),1,fd);
    
    while(!feof(fd))
    {
      aux->nxt=(NodeComment*)malloc(sizeof(NodeComment));
      aux=aux->nxt;
      datos=&(aux->comentario);
      fread(datos,sizeof(COMMT),1,fd);
    }
    read->post.root=first;
    aux->nxt=NULL;
    fclose(fd);
  }
  return 0; 
}
