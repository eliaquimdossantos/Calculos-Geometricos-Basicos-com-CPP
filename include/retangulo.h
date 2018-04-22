#ifndef RETANGULO_H
#define RETANGULO_H

/**
 * @file    retangulo.h
 * @brief   Cabeçalho da classe Retangulo
*/

class Retangulo{
private:
    float altura;
    float largura;
public:
    Retangulo(float altura_, float largura_);
    void setAltura(float altura_);
    void setLargura(float largura_);
    float getAltura();
    float getLargura();
    ~Retangulo();
};

#endif