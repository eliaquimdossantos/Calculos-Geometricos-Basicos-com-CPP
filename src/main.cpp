/**
 * @file    main.cpp
 * @brief   Programa responsável por calcular a área e volume ou perímetro de diversas formas geométricas
 * @author  Eliaquim dos Santos Costa
 * @since   20/04/2018
 * @date    22/04/2018
*/
#include <memory>
#include "run.h"

/**
 * @brief   Função principal de execução
 * @param   Quantidade de argumentos na chamada da execução do programa
 * @param   Vetor com os parametros passados para a execução do programa
 * @return  Zero se não houver falhas
 */
int main(int argc, char * argv[]){
    std::unique_ptr<Run> operacoes(new Run(argc, argv));

        operacoes->iniciar();

    return 0;
}