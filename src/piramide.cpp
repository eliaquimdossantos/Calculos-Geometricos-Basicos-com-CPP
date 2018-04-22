#include "piramide.h"

Piramide::Piramide(float largura_base_, float altura_piramide_){
    largura_base = largura_base_;
    altura_piramide = altura_piramide_;
}
void Piramide::setLarguraBase(float largura_base_){
    largura_base = largura_base_;
}
void Piramide::setAlturaPiramide(float altura_piramide_){
    altura_piramide = altura_piramide_;
}
float Piramide::getLarguraBase(){
    return largura_base;
}
float Piramide::getAlturaPiramide(){
    return altura_piramide;
}
Piramide::~Piramide(){

}