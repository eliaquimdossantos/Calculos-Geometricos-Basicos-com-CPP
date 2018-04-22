#include "quadrado.h"

/**
 * @file    quadrado.cpp
 * @brief   Classe Quadrado
*/

Quadrado::Quadrado(float lado_){
    lado = lado_;
}
void Quadrado::setLado(float lado_){
    lado = lado_;
}
float Quadrado::getLado(){
    return lado;
}
Quadrado::~Quadrado(){
    
}