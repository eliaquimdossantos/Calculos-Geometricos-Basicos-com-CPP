#ifndef CIRCULO_H
#define CIRCULO_H

/**
 * @file    circulo.h
 * @brief   Cabeçalho da classe Círculo
*/

class Circulo{
private:
    float raio;

public:
    Circulo(float raio_);
    void setRaio(float raio_);
    float getRaio();
    ~Circulo();
};

#endif