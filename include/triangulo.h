#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo{
private:
    float altura;
    float base;

public:
    Triangulo(float altura_, float base_);
    void setAltura(float altura_);
    void setBase(float base_);
    float getAltura();
    float getBase();
    ~Triangulo();
};

#endif