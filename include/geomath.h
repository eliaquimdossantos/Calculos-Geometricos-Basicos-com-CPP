#ifndef GEOMATH_H
#define GEOMATH_H

#include "circulo.h"
#include "cubo.h"
#include "piramide.h"
#include "paralelepipedo.h"
#include "quadrado.h"
#include "retangulo.h"
#include "triangulo.h"
#include "esfera.h"
#include <cmath>
#include <string>
class Geomath{
public:
    Geomath();
    float areaCirculo(Circulo & circulo);
    float areaCubo(Cubo & cubo);
    float areaPiramide(Piramide & piramide);
    float areaParalelepipedo(Paralelepipedo & paralelepipedo);
    float areaQuadrado(Quadrado & quadrado);
    float areaRetangulo(Retangulo & retangulo);
    float areaTriangulo(Triangulo & triangulo);
    float areaEsfera(Esfera & esfera);
    float volumeEsfera(Esfera & esfera);
    float volumeCubo(Cubo & cubo);
    float volumePiramide(Piramide & piramide);
    float volumeParalelepipedo(Paralelepipedo & paralelepipedo);
    float perimetroCirculo(Circulo & circulo);
    float perimetroQuadrado(Quadrado & quadrado);
    float perimetroRetangulo(Retangulo & retangulo);
    float perimetroTriangulo(Triangulo & triangulo);
    ~Geomath();
};

#endif