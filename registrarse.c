#include "Cliente.h"

int Registro (usu *Datos)
{
  char Aux[8];
  int a;
  
  do
  {
    //system("clear");
  
    printf("Ingrese Nombre: ");
    scanf("%s",Datos->Nombre);
  
    printf("Ingrese edad: ");
    scanf("%d",&(Datos->Edad));
  
    printf("Ingrese e-mail: ");
    scanf("%s",Datos->email);
  
    printf("Ingrese Usuario: ");
    scanf("%s",Datos->Usuario);
  
    printf("Ingrese Contraseña: ");
    scanf("%s",Datos->Contra);
  
    printf("Repita Contraseña: ");
    scanf("%s",Aux);
    a=strcmp(Datos->Contra,Aux);
    if(a)
      printf("ERROR: Contraseñas diferentes\n");
    //sleep(3);
    Datos->id=2;
		
  }while(a);
  
  return 0;
}
  