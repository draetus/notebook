#include <iostream>
#include "functions.h"

int main()
{
    char opcao;
    while (opcao != '2')
    {
        std::cout << std::endl << "Selecione a opcao desejada (Informe o numero)" << std::endl;
        std::cout << "'1' -> Criar Arquivo e Inserir texto" << std::endl << "  exit -> Sai da funcao" << std::endl << "  return -> Volta a funcao de titulo" << std::endl << std::endl;
        std::cout << "'2' -> Sair do programa" << std::endl;
        std::cin >> opcao;
        switch(opcao) {
            case '1' :
                std::cout << "Arquivo Criado com Sucesso: " << std::endl << titulo(opcao) << std::endl;
                break;
            case '2' :
                std::cout << "Saindo do programa..." << std::endl;
                break;
            default :
            std::cout << std::endl << "Opcao Invalida " << std::endl;
        }
    }
    return 0;
}