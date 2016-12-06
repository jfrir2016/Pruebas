#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>
#include <netdb.h>

#define BUFFER 100
#define PORT 43210
#define IP "192.168.0.7"

typedef struct User
{
  int id;
  char Nombre[20];
  int Edad;
  char Usuario[20];
  char Contra[8];
  char email[35];
}usu;

typedef struct Post
{
  int id;
  int idU;			//Id del usuario que la creo
  char titulo[100];
  char contenido[500];
  struct CommentNode *root;
}post;


int Registro (usu*);

int Ingresar (usu*);
