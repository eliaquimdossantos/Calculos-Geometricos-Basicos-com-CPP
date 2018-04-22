#include "run.h"
/**
 * @file    run.cpp
 * @brief   Responsável por manipular 
 * as figuras geométricas com suas 
 * determinadas operações
 * @details Integra as formas geométricas 
 * com a classe Geomath, manipulando as operações 
 * solicitadas pelo usuário
*/

/**
 * @brief   Construtor da classe Run
*/
Run::Run(int argc_, char * argv_[]){
    argc = argc_; /**< Quantidade de argumentos fornecidos via linha de comando. */
    argv = argv_; /**< Vetor de argumentos fornecidos via linha de comando. */

    if(argc == 3){
        valor1 = std::stof(argv[2]);
    }else if(argc == 4){
        valor1 = std::stof(argv[2]);
        valor2 = std::stof(argv[3]);
    }else if(argc == 5){
        valor1 = std::stof(argv[2]);
        valor2 = std::stof(argv[3]);
        valor3 = std::stof(argv[4]);
    }
}
/**
 * @brief   Função responsável por detectar a operação solicitada
 * pelo usuário e realizá-la
*/
void Run::iniciar(){
    if(argc > 2 && argc < 6){
        nome_forma = argv[1];   /**< A variável recebe o segundo argumento passado por linha de comando */
        geometricos = std::make_unique<Geomath>(); /**< Inicializa o ponteiro responsável por acessar as operações a serem realizadas com as figuras*/

        if("circulo" == nome_forma){
            circulo = std::make_unique<Circulo>(valor1); /**< Instancia um objeto do tipo Circulo */

            area = geometricos->areaCirculo(*circulo);
            perimetro = geometricos->perimetroCirculo(*circulo);
            std::cout << "Area do circulo: " << area << std::endl;
            std::cout << "Perimetro do circulo: " << perimetro << std::endl;
        }

        else if("cubo" == nome_forma){
            cubo = std::make_unique<Cubo>(valor1); /**< Instancia um objeto do tipo Cubo */

            area = geometricos->areaCubo(*cubo);
            volume = geometricos->volumeCubo(*cubo);
            std::cout << "Area do cubo: " << area << std::endl;
            std::cout << "Volume do cubo: " << volume << std::endl;
        }

        else if("esfera" == nome_forma){
            esfera = std::make_unique<Esfera>(valor1); /**< Instancia um objeto do tipo Esfera */

            area = geometricos->areaEsfera(*esfera);
            volume = geometricos->volumeEsfera(*esfera);
            std::cout << "Area da esfera: " << area << std::endl;
            std::cout << "Volume da esfera: " << volume << std::endl;
        }

        else if("paralelepipedo" == nome_forma){
            paralelepipedo = std::make_unique<Paralelepipedo>(valor1, valor2, valor3); /**< Instancia um objeto do tipo Paralelepipedo */

            area = geometricos->areaParalelepipedo(*paralelepipedo);
            volume = geometricos->volumeParalelepipedo(*paralelepipedo); 
            std::cout << "Area do paralelepipedo: " << area << std::endl;
            std::cout << "Volume do paralelepipedo: " << volume << std::endl;
        }

        else if("piramide" == nome_forma){
            piramide = std::make_unique<Piramide>(valor1, valor2); /**< Instancia um objeto do tipo Piramide*/

            area = geometricos->areaPiramide(*piramide);
            volume = geometricos->volumePiramide(*piramide);
            std::cout << "Area da piramide: " << area << std::endl;
            std::cout << "Volume da piramide: " <<  volume << std::endl;
        }

        else if("quadrado" == nome_forma){
            quadrado = std::make_unique<Quadrado>(valor1); /**< Instancia um objeto do tipo Quadrado */

            area = geometricos->areaQuadrado(*quadrado);
            perimetro = geometricos->perimetroQuadrado(*quadrado);
            std::cout << "Area do quadrado: " << area << std::endl;
            std::cout << "Perimetro do quadrado: " <<  perimetro << std::endl;
        }

        else if("triangulo" == nome_forma){
            triangulo = std::make_unique<Triangulo>(valor1); /**< Instancia um objeto do tipo Triangulo */

            area = geometricos->areaTriangulo(*triangulo);
            perimetro = geometricos->perimetroTriangulo(*triangulo);
            std::cout << "Area do triangulo: " << area << std::endl;
            std::cout << "Perimetro do triangulo: " <<  perimetro << std::endl;
        }

        else if("retangulo" == nome_forma){        
            retangulo = std::make_unique<Retangulo>(valor1, valor2); /**< Instancia um objeto do tipo Retangulo */

            area = geometricos->areaRetangulo(*retangulo);
            perimetro = geometricos->perimetroRetangulo(*retangulo);
            std::cout << "Area do retangulo: " << area << std::endl;
            std::cout << "Perimetro do retangulo: " << perimetro << std::endl;
        }

    }else{
        
        instrucoes(); /**< Mostra no prompt as instruções de uso do programa */
    }
}
/**
 * @detais   Mostra no prompt as instruções, caso não hajam informações sobre nome de objetos 
 * ou se existirem mais que a quantidade máxima de parâmetros necessários para executar
 * o programa
*/
void Run::instrucoes(){
    std::string linha; /**< Salva uma linha do arquivo por vez, para que o arquivo seja exibido no prompt */
    file_instrucoes.open("instrucoes.txt"); /**< Tenta abrir o arquivo "instrucoes.txt" */
    if(file_instrucoes.is_open()){ 
        while(getline(file_instrucoes, linha)){ /**< Obtem cada linha do arquivo "instrucoes.txt" até o final do arquivo */
            std::cout << linha << std::endl;
        }
    }else{
        std::cout << "Nao foi possivel exibir as instrucoes!" << std::endl; /**< Mensagem caso não seja possível abrir o arquivo */
    }
    file_instrucoes.close(); /**< Fecha o arquivo */
}
Run::~Run(){

}