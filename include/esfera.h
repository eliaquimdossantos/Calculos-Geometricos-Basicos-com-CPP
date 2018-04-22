#ifndef ESFERA_H
#define ESFERA_H

/**
 * @file    esfera.h
 * @brief   Cabeçalho da classe Esfera
*/

class Esfera{
private:
    float raio;
public:
    Esfera(float raio_);
    void setRaio(float raio_);
    float getRaio();
    ~Esfera();
};

#endif