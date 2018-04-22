#ifndef PIRAMIDE_H
#define PIRAMIDE_H

/**
 * @file    piramide.h
 * @brief   Cabeçalho da classe Piramide
*/

class Piramide{
private:
    float largura_base;
    float altura_piramide;
public:
    Piramide(float largura_base_, float altura_piramide_);
    void setLarguraBase(float largura_base_);
    void setAlturaPiramide(float altura_piramide_);
    float getLarguraBase();
    float getAlturaPiramide();
    ~Piramide();
};

#endif