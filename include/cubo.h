#ifndef CUBO_H
#define CUBO_H

class Cubo{
private:
    float aresta;
public:
    Cubo(float aresta_);
    void setAresta(float aresta_);
    float getAresta();
    ~Cubo();
};

#endif