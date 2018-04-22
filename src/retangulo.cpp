#include "retangulo.h"

/**
 * @file    retangulo.cpp
 * @brief   Classe Retangulo
*/

Retangulo::Retangulo(float altura_, float largura_){
    altura = altura_;
    largura = largura_;
}
void Retangulo::setAltura(float altura_){
    altura = altura_;
}
void Retangulo::setLargura(float largura_){
    largura = largura_;
}
float Retangulo::getAltura(){
    return altura;
}
float Retangulo::getLargura(){
    return largura;
}
Retangulo::~Retangulo(){

}