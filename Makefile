CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -g
OBJS = server.o AgregarPost.o BajaUsuario.o BorrarPub.o BuscoPub.o Check.o Guardar.o GuardarComents.o GuardarPub.o LevantarCom.o LevantarLista.o LevantarPubli.o ListarPost.o listas_agregarnodopub.o listas_agregarnodousuario.o listas_borrarpub.o listas_borrarusuario.o listas_borrarcomentario.o
OBJTS = cliente.o Ingresar.o registrarse.o

CliExe : $(OBJTS)
	$(CC) $(OBJTS) -o $@
%.o : %.c %.h
	$(CC) $(CFLAGS) $< -o $@

SerExe : $(OBJS)
	$(CC) $(OBJS) -o $@
%.o : %.c %.h
	$(CC) $(CFLAGS) $< -o $@
Del :
	rm -I ./*.o