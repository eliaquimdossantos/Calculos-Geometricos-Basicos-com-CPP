#Created by Eliaquim dos Santos
PROG = geometria
CC = g++
CPPFLAGS = -Wall -std=c++1y -pedantic -I./include
OBJS = main.o run.o geomath.o circulo.o cubo.o esfera.o paralelepipedo.o piramide.o quadrado.o retangulo.o run.o triangulo.o
SRC = ./src/

$(PROG):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(PROG) 
	mv *.o ./build
	mv main ./bin
	
main.o:
	$(CC) $(CPPFLAGS) -c  $(SRC)main.cpp
run.o:
	$(CC) $(CPPFLAGS) -c $(SRC)run.cpp
geomath.o:
	$(CC) $(CPPFLAGS) -c $(SRC)cadastro.cpp
circulo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)empresa.cpp
cubo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)funcionario.cpp
esfera.o:
	$(CC) $(CPPFLAGS) -c $(SRC)data.cpp
paralelepipedo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)data.cpp
piramide.o:
	$(CC) $(CPPFLAGS) -c $(SRC)data.cpp
quadrado.o:
	$(CC) $(CPPFLAGS) -c $(SRC)data.cpp
retangulo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)data.cpp
triangulo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)data.cpp
clean:
	`rm -f core ./build/*.o` 
