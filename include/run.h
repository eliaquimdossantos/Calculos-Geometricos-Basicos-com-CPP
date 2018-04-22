#ifndef RUN_H
#define RUN_H

#include "geomath.h"
#include <iostream>
#include <string>
#include <memory>
#include <fstream>
/**
 * @brief   Cabeçalho da classe Run
*/

class Run{
private:
    std::ifstream file_instrucoes; /**< Reponsável por ler um arquivo */
    std::string nome_forma; /**< Armazena o argumento do nome da figura passada via linha de comando */
    float valor1;   /**< Auxiliar para primeiro float passado via linha de comando */
    float valor2;   /**< Auxiliar para segundo float passado via linha de comando */
    float valor3;   /**< Auxiliar para terceiro float passado via linha de comando */
    float area;     /**< Armazena o valor da área de uma figura*/
    float perimetro;/**< Armazena o valor do perímetro de uma figura */
    float volume;   /**< Armazena o valor do volume de uma figura */
    int argc;     
    char ** argv;
    std::unique_ptr<Circulo> circulo; /**< Objeto do tipo Circulo */
    std::unique_ptr<Cubo> cubo; /**< Objeto do tipo Cubo */
    std::unique_ptr<Esfera> esfera; /**< Objeto do tipo Esfera */
    std::unique_ptr<Paralelepipedo> paralelepipedo; /**< Objeto do tipo Paralelepipedo */
    std::unique_ptr<Piramide> piramide; /**< Objeto do tipo Piramide */
    std::unique_ptr<Quadrado> quadrado; /**< Objeto do tipo Quadrado */
    std::unique_ptr<Retangulo> retangulo; /**< Objeto do tipo Retangulo */
    std::unique_ptr<Triangulo> triangulo; /**< Objeto do tipo Triangulo */
    std::unique_ptr<Geomath> geometricos; /**< Objeto do tipo Geomath */
public:
    Run(int argc_, char * argv_[]);
    void iniciar();
    void instrucoes();
    ~Run();
};

#endif