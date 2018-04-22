#include "triangulo.h"

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