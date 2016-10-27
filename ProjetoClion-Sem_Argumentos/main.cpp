#include <iostream>

int main(int argc, char **argv)
{
    char opcao;
    if (argc > 1) {
        std::cout << "Teste";
    }
    else
    {
        while (opcao != '3') {
            std::cout << std::endl << "Selecione a opcao desejada (Informe o numero)" << std::endl;
            std::cout << "'1' -> Criar arquivo e inserir texto" << std::endl << "  exit -> Sai da funcao" << std::endl
                      << "  return -> Volta a funcao de titulo" << std::endl << std::endl;
            std::cout << "'2' -> Visualizar arquivo existente" << std::endl << "  exit -> Sai da funcao" << std::endl
                      << std::endl;
            std::cout << "'3' -> Sair do programa" << std::endl;
            std::cin >> opcao;
            switch (opcao) {
                case '1' :
                    std::cout << titulo(opcao) << std::endl;
                    break;
                case '2' :
                    view(opcao);
                    break;
                case '3' :
                    std::cout << "Saindo do programa..." << std::endl;
                    break;
                default :
                    std::cout << std::endl << "Opcao Invalida " << std::endl;
            }
        }
    }
    return 0;
}