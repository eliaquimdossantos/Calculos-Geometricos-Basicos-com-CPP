#ifndef TRIANGULO_H
#define TRIANGULO_H

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