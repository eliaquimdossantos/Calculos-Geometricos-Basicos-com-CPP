#ifndef PARELELEPIPEDO_H
#define PARELELEPIPEDO_H

class Paralelepipedo{
private:
    float largura;
    float altura;
    float profundidade;
public:
    Paralelepipedo(float largura_, float altura_, float profundidade_);
    void setLargura(float largura_);
    void setAltura(float altura_);
    void setProfundidade(float profundidade_);
    float getLargura();
    float getAltura();
    float getProfundidade();
    ~Paralelepipedo();
};

#endif