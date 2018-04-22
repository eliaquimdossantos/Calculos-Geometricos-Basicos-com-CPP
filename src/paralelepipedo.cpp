#include "paralelepipedo.h"
/**
 * @file    paralelepipedo.cpp
 * @brief   Classe Paralelepipedo
*/
Paralelepipedo::Paralelepipedo(float largura_, float altura_, float profundidade_){
    largura = largura_;
    altura = altura_;
    profundidade = profundidade_;
}
void Paralelepipedo::setLargura(float largura_){
    largura = largura_;
}
void Paralelepipedo::setAltura(float altura_){
    altura = altura_;
}
void Paralelepipedo::setProfundidade(float profundidade_){
    profundidade = profundidade_;
}
float Paralelepipedo::getLargura(){
    return largura;
}
float Paralelepipedo::getAltura(){
    return altura;
}
float Paralelepipedo::getProfundidade(){
    return profundidade;
}
Paralelepipedo::~Paralelepipedo(){
    
}