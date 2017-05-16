#include <iostream>
#include <fstream>

std::string txt(std::string titulocompleto){
    std::string texto,textocompleto;
    std::ofstream myfile;
    myfile.open(titulocompleto);
    std::cout << "Digite o desejado(escreva return para sair): " << std::endl;
    while(texto != "return")
    {
        std::cin >> texto;
        if (texto != "return")
        {
            textocompleto += texto + " ";
        }
        if (std::cin.get() == '\n')
        {
            textocompleto += '\n';
        }
    }
    myfile << textocompleto;
    myfile.close();
    return textocompleto;
}

void view(std::string titulo){
    std::string texto;
    std::ifstream myfile;
    std::cout << std::endl << titulo << std::endl << std::endl;
    myfile.open(titulo);
    if (myfile.is_open())
    {
        while(!myfile.eof())
        {
            getline(myfile,texto);
            std::cout << texto << std::endl;
        }
        myfile.close();
    }
    else
    {
        std::cout << "Arquivo nao existente" << std::endl;
    }
}

void del(std::string titulo){
    std::ifstream myfile;
    myfile.open(titulo);
    if (myfile.is_open())
    {
        remove(titulo.c_str());
        std::cout << "Arquivo excluido com sucesso" << std::endl;
    }
    else
    {
        std::cout << "Erro ao deletar Arquivo" << std::endl;
    }
}

void rename(std::string oldname,std::string newname){
    std::ifstream myfile;
    myfile.open(oldname);
    if (myfile.is_open())
    {
        if ((rename(oldname.c_str(),newname.c_str())) == 0)
        {
            std::cout << "Arquivo renomeado com Sucesso" << std::endl;
        }
        else
        {
            std::cout << "Falha ao renomear arquivo" << std::endl;
        }
    }
    else
    {
        std::cout << "Arquivo nao existente";
    }
}