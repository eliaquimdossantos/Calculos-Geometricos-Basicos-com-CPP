#include "geomath.h"

#define PI 3.1415 /**< Define a constante Pi como 3,1415 */

/**
 * @file    geomath.cpp
 * @brief   Responsável receber figuras geometricas
 * e realizar os cálculos solicitados
 * @details Possui as fórmulas, para cálculo das 
 * figuras geométricas indicadas no redme, para
 * área e volume ou perímetro
*/

Geomath::Geomath(){

}

/**
 * @brief   Área do circulo
 * @details Função responsável por calcular
 * a área de um círculo recebido por referência
 * @param circulo Circulo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::areaCirculo(Circulo & circulo){
    float area = PI * (pow(circulo.getRaio(), 2));
    return area;
}

/**
 * @brief   Área do cubo
 * @details Função responsável por calcular
 * a área de um cubo recebido por referência
 * @param cubo Cubo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::areaCubo(Cubo & cubo){
    float aresta = cubo.getAresta();
    float area = 6 * pow(aresta, 2);
    return area;
}

/**
 * @brief   Área de uma pirâmide
 * @details Função responsável por calcular
 * a área de uma pirâmide recebido por referência
 * @param piramide Pirâmide passada por referência 
 * a partir de uma outra classe
*/
float Geomath::areaPiramide(Piramide & piramide){
    float larg_base = piramide.getLarguraBase();
    float alt_piram = piramide.getAlturaPiramide();

    float altura_face_triangular = sqrt(pow(larg_base/2, 2)
                                      + pow(alt_piram, 2));
    float area_face_triangular = 
                (larg_base * altura_face_triangular)/2;

    float area_base = pow(larg_base, 2);
    float area_lateral = area_face_triangular*4;

    float area = area_base + area_lateral;
    return area;
}

/**
 * @brief   Área do cubo
 * @details Função responsável por calcular
 * a área de um cubo recebido por referência
 * @param cubo Cubo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::areaParalelepipedo(Paralelepipedo & paralelepipedo){
    float aresta1 = paralelepipedo.getLargura();
    float aresta2 = paralelepipedo.getAltura();
    float aresta3 = paralelepipedo.getProfundidade();
    float area = ((2*aresta1*aresta2) + (2*aresta1*aresta3) 
                                + (2*aresta2*aresta3));

    return area;
}

/**
 * @brief   Área do quadrado
 * @details Função responsável por calcular
 * a área de um quadrado recebido por referência
 * @param quadrado Quadrado passado por referência 
 * a partir de uma outra classe
*/
float Geomath::areaQuadrado(Quadrado & quadrado){
    float area = pow(quadrado.getLado(), 2);
    return area;
}

/**
 * @brief   Área do retangulo
 * @details Função responsável por calcular
 * a área de um retangulo recebido por referência
 * @param retangulo Retangulo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::areaRetangulo(Retangulo & retangulo){
    float area = retangulo.getAltura() * retangulo.getLargura();
    return area;
}

/**
 * @brief   Área do triangulo
 * @details Função responsável por calcular
 * a área de um triangulo recebido por referência
 * @param triangulo Triangulo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::areaTriangulo(Triangulo & triangulo){
    float base = triangulo.getLado();
    float altura = sqrt(pow(base, 2) - pow(base/2, 2));
    float area = (base*altura)/2;
    return area;
}

/**
 * @brief   Área da esfera
 * @details Função responsável por calcular
 * a área de uma esfera recebido por referência
 * @param esfera Esfera passado por referência 
 * a partir de uma outra classe
*/
float Geomath::areaEsfera(Esfera & esfera){
    float raio = esfera.getRaio();
    float area = 4 * PI * pow(raio, 2);
    return area;
}

/**
 * @brief   Perímetro do circulo
 * @details Função responsável por calcular
 * o perímetro de um circulo recebido por referência
 * @param circulo Circulo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::perimetroCirculo(Circulo & circulo){
    float perimetro = 2 * PI * circulo.getRaio();
    return perimetro;
}

/**
 * @brief   Volume da esfera
 * @details Função responsável por calcular
 * o volume de uma esfera recebida por referência
 * @param esfera Esfera passado por referência 
 * a partir de uma outra classe
*/
float Geomath::volumeEsfera(Esfera & esfera){
    float volume = (4*(pow(esfera.getRaio(),3)*PI))/3;
    return volume;
}

/**
 * @brief   Volume do cubo
 * @details Função responsável por calcular
 * o volume de um cubo recebido por referência
 * @param cubo Cubo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::volumeCubo(Cubo & cubo){
    float aresta = cubo.getAresta();
    float volume = pow(aresta, 3);
    return volume;
}
/**
 * @brief   Volume da piramide
 * @details Função responsável por calcular
 * o volume de uma piramide recebida por referência
 * @param piramide Piramide passado por referência 
 * a partir de uma outra classe
*/
float Geomath::volumePiramide(Piramide & piramide){
    float larg_base = piramide.getLarguraBase();
    float area_base = pow(larg_base, 2);
    float volume = (piramide.getAlturaPiramide() * area_base)/3;
    return volume;
}

/**
 * @brief   Volume do paralelepipedo
 * @details Função responsável por calcular
 * o volume de um paralelepipedo recebido por referência
 * @param paralelepipedo Paralelepipedo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::volumeParalelepipedo(Paralelepipedo & paralelepipedo){
    float aresta1 = paralelepipedo.getLargura();
    float aresta2 = paralelepipedo.getAltura();
    float aresta3 = paralelepipedo.getProfundidade();
    float volume = aresta1 * aresta2 * aresta3; 
    return volume;
}

/**
 * @brief   Perímetro do quadrado
 * @details Função responsável por calcular
 * o perímetro de um quadrado recebido por referência
 * @param quadrado Quadrado passado por referência 
 * a partir de uma outra classe
*/
float Geomath::perimetroQuadrado(Quadrado & quadrado){
    float perimetro = 4 * quadrado.getLado();
    return perimetro;
}

/**
 * @brief   Perímetro do retangulo
 * @details Função responsável por calcular
 * o perímetro de um retangulo recebido por referência
 * @param retangulo Retangulo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::perimetroRetangulo(Retangulo & retangulo){
    float base = retangulo.getLargura();
    float altura = retangulo.getAltura();
    float perimetro = 2 * (base + altura);
    return perimetro;
}

/**
 * @brief   Perímetro do triangulo
 * @details Função responsável por calcular
 * o perímetro de um triangulo recebido por referência
 * @param triangulo Triangulo passado por referência 
 * a partir de uma outra classe
*/
float Geomath::perimetroTriangulo(Triangulo & triangulo){
    float lado1 = triangulo.getLado();
    float lado2 = triangulo.getLado();
    float lado3 = triangulo.getLado();
    float perimetro = lado1 + lado2 + lado3;
    return perimetro;
}
Geomath::~Geomath(){
    
}