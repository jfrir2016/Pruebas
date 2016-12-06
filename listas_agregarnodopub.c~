#include "TPO.h"

void AgregarNodoPub(POST *post, NodePost *root)
{
  NodePost *current=root;
  
   if(current==NULL){
    root = (NodePost*)malloc(sizeof(NodePost));
    root->post=*post;
    return;
  }
  
  while(current->nxt!=NULL){
    current=current->nxt;
  }
  current->nxt=(NodePost*)malloc(sizeof(NodePost));
  current->nxt->post=*post;
  return;
}