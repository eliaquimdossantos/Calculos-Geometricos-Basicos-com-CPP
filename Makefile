#Created by Eliaquim dos Santos
PROG = geometria
CC = g++
CPPFLAGS = -Wall -std=c++1y -pedantic -lm -I./include
OBJS = main.o geomath.o circulo.o cubo.o esfera.o paralelepipedo.o piramide.o quadrado.o retangulo.o run.o triangulo.o
SRC = ./src/

$(PROG):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(PROG) 
	mv *.o ./build
	mv geometria ./bin
	
main.o:
	$(CC) $(CPPFLAGS) -c $(SRC)main.cpp
run.o:
	$(CC) $(CPPFLAGS) -c $(SRC)run.cpp
geomath.o:
	$(CC) $(CPPFLAGS) -c $(SRC)geomath.cpp
circulo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)circulo.cpp
cubo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)cubo.cpp
esfera.o:
	$(CC) $(CPPFLAGS) -c $(SRC)esfera.cpp
paralelepipedo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)paralelepipedo.cpp
piramide.o:
	$(CC) $(CPPFLAGS) -c $(SRC)piramide.cpp
quadrado.o:
	$(CC) $(CPPFLAGS) -c $(SRC)quadrado.cpp
retangulo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)retangulo.cpp
triangulo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)triangulo.cpp
clean:
	`rm -f core ./build/*.o` 
