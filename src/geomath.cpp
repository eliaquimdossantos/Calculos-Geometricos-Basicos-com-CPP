#include "geomath.h"

#define PI 3.1415

Geomath::Geomath(){

}
float Geomath::areaCirculo(Circulo & circulo){
    float area = PI * (pow(circulo.getRaio(), 2));
    return area;
}
float Geomath::areaCubo(Cubo & cubo){
    float area = 6 * (cubo.getAresta());
    return area;
}
float Geomath::areaPiramide(Piramide & piramide){
    float larg_base = piramide.getLarguraBase();
    float alt_piram = piramide.getAlturaPiramide();

    float altura_face_triangular = sqrt(pow(larg_base/2, 2)
                                      + pow(alt_piram, 2));
    float area_face_triangular = 
                (larg_base * altura_face_triangular)/2;

    float area_base = pow(larg_base, 2);
    float area_lateral = area_face_triangular*4;

    float area = area_base * area_lateral;
    return area;
}
float Geomath::areaParalelepipedo(Paralelepipedo & paralelepipedo){
    float aresta1 = paralelepipedo.getLargura();
    float aresta2 = paralelepipedo.getAltura();
    float aresta3 = paralelepipedo.getProfundidade();
    float area = ((2*aresta1*aresta2) + (2*aresta1*aresta3) 
                                + (2*aresta2*aresta3));

    return area;
}
float Geomath::areaQuadrado(Quadrado & quadrado){
    float area = pow(quadrado.getLado(), 2);
    return area;
}
float Geomath::areaRetangulo(Retangulo & retangulo){
    float area = retangulo.getAltura() * retangulo.getLargura();
    return area;
}
float Geomath::areaTriangulo(Triangulo & triangulo){
    float area = (triangulo.getAltura() * triangulo.getBase())/2;
    return area;
}
float Geomath::areaEsfera(Esfera & esfera){
    float area = 4 * PI * esfera.getRaio();
    return area;
}
float Geomath::perimetroCirculo(Circulo & circulo){
    float perimetro = 2 * PI * circulo.getRaio();
    return perimetro;
}
float Geomath::volumeEsfera(Esfera & esfera){
    float volume = (4*(pow(esfera.getRaio(),3)*PI))/3;
    return volume;
}
float Geomath::volumeCubo(Cubo & cubo){
    float volume = pow(cubo.getAresta(), 3);
    return volume;
}
float Geomath::volumePiramide(Piramide & piramide){
    float larg_base = piramide.getLarguraBase();
    float area_base = pow(larg_base, 2);
    float volume = (piramide.getAlturaPiramide() * area_base)/3;
    return volume;
}
float Geomath::volumeParalelepipedo(Paralelepipedo & paralelepipedo){
    float aresta1 = paralelepipedo.getLargura();
    float aresta2 = paralelepipedo.getAltura();
    float aresta3 = paralelepipedo.getProfundidade();
    float volume = aresta1 * aresta2 * aresta3; 
    return volume;
}
float Geomath::perimetroQuadrado(Quadrado & quadrado){
    float perimetro = 4 * quadrado.getLado();
    return perimetro;
}
float Geomath::perimetroRetangulo(Retangulo & retangulo){
    float base = retangulo.getLargura();
    float altura = retangulo.getAltura();
    float perimetro = 2 * (base + altura);
    return perimetro;
}
float Geomath::perimetroTriangulo(Triangulo & triangulo){
    float lado1 = triangulo.getBase();
    float lado2 = triangulo.getBase();
    float lado3 = triangulo.getBase();
    float perimetro = lado1 + lado2 + lado3;
    return perimetro;
}
Geomath::~Geomath(){
    
}