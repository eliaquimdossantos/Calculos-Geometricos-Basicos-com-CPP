#ifndef QUADRADO_H
#define QUADRADO_H

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