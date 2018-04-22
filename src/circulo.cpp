#include "circulo.h"
/**
 * @file    circulo.cpp
 * @brief   Classe Circulo
*/
Circulo::Circulo(float raio_){
    raio = raio_;
}
void Circulo::setRaio(float raio_){
    raio = raio_;
}
float Circulo::getRaio(){
    return raio;
}
Circulo::~Circulo(){

}