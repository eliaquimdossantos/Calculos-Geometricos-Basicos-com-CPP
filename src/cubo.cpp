#include "cubo.h"
/**
 * @file    cubo.cpp
 * @brief   Classe Cubo
*/
Cubo::Cubo(float aresta_){
    aresta = aresta_;
}
void Cubo::setAresta(float aresta_){
    aresta = aresta_;
}
float Cubo::getAresta(){
    return aresta;
}
Cubo::~Cubo(){

}