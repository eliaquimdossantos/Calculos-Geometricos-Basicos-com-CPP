#ifndef TRIANGULO_H
#define TRIANGULO_H

/**
 * @file    triangulo.h
 * @brief   Cabeçalho da classe Triangulo
*/

class Triangulo{
private:
    float lado;
public:
    Triangulo(float lado_);
    void setLado(float lado_);
    float getLado();
    ~Triangulo();
};

#endif