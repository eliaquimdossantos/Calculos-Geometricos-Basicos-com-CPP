#include "triangulo.h"

Triangulo::Triangulo(float altura_, float base_){
    altura = altura_;
    base = base_;
}
void Triangulo::setAltura(float altura_){
    altura = altura_;
}
void Triangulo::setBase(float base_){
    base = base_;
}
float Triangulo::getAltura(){
    return altura;
}
float Triangulo::getBase(){
    return base;
}
Triangulo::~Triangulo(){

}