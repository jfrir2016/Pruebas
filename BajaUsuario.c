#include "TPO.h"

int BajaUsu (int fd, NodeUser *URoot,int id)
{
  int a;
  if(!(a=BorrarNodoUsuario(id,URoot)))
  {
    if((send(fd,&a,sizeof(int),0))==-1)	//Envia 1 por correcto
    {
      perror("Send: ");
      exit(1);
    }
  }
  else
  {
    if((send(fd,&a,sizeof(int),0))==-1)	//Envia 0 por error
    {
      perror("Send: ");
      exit(1);
    }
  }
  return 0;
}
    
      
  