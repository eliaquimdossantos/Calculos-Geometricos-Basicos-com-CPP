#include "triangulo.h"

/**
 * @file    triangulo.cpp
 * @brief   Classe Triangulo
*/

Triangulo::Triangulo(float lado_){
    lado = lado_;
}
void Triangulo::setLado(float lado_){
    lado = lado_;
}
float Triangulo::getLado(){
    return lado;
}
Triangulo::~Triangulo(){

}