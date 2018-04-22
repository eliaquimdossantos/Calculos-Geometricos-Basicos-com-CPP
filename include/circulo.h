#ifndef CIRCULO_H
#define CIRCULO_H

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