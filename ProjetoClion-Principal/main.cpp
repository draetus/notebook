#include <iostream>
#include "functions.h"

int main(int argc, char **argv)
{
    std::string arg,arg1;
    if (argc > 1)
    {
        arg = argv[1];
        if ((arg == "--new") || (arg == "-n"))
        {
            arg = argv[2];
            std::cout << "Arquivo criado com sucesso" << std::endl << arg << std::endl << txt(arg) << std::endl;
        }
        else
        {
            if ((arg == "--view") || (arg == "-v"))
            {
                arg = argv[2];
                view(arg);
            }
            else
            {
                if ((arg == "--delete") || (arg == "-d"))
                {
                    arg = argv[2];
                    del(arg);
                }
                else
                {
                    if ((arg == "--rename") || (arg == "-r"))
                    {
                        arg = argv[2];
                        arg1 = argv[3];
                        rename(arg,arg1);
                    }
                    else
                    {
                        if ((arg == "--help") || (arg == "-h"))
                        {
                            std::cout << arg[2];
                            std::cout << "Comandos Disponiveis: " << std::endl << "-n     --new 'nome do arquivo' -> Criar arquivo e inserir texto" << std::endl;
                            std::cout << "-v     --view 'nome do arquivo' -> Visualiza arquivo ja existente" << std::endl;
                        }
                        else
                        {
                            std::cout << "Comando Invalido" << std::endl << "Use --help para ver comandos disponiveis" << std::endl;
                        }
                    }
                }
            }
        }
    }
    else
    {
        std::cout << "Argumentos Insuficientes" << std::endl << "Use --help para ver comandos disponiveis" << std::endl;
    }
    return 0;
}