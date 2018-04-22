#ifndef QUADRADO_H
#define QUADRADO_H

/**
 * @file    quadrado.h
 * @brief   Cabeçalho da classe Quadrado
*/

class Quadrado{
private:
    float lado;
public:
    Quadrado(float lado_);
    void setLado(float lado_);
    float getLado();
    ~Quadrado();
};

#endif