#include <iostream>
#include <fstream>

std::string txt(std::string titulocompleto){
    std::string texto,textocompleto;
    std::ofstream myfile;
    myfile.open(titulocompleto);
    std::cout << "Digite return para voltar" << std::endl;
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
    std::cout << "Arquivo Criado com Sucesso: " << std::endl << titulocompleto << std::endl;
    return textocompleto;
}


std::string titulo(char x){
    std::string textocompleto,titulocompleto;
    std::cout << "Opcao " << x << std::endl;
    std::cout << "Informe o Titulo (ou digite exit para sair da funcao): ";
    std::cin >> titulocompleto;
    if (titulocompleto != "exit")
    {
        textocompleto = txt(titulocompleto);
    }
return textocompleto;
}

void view(char x){
    std::string titulo,texto;
    std::ifstream myfile;
    std::cout << "Opcao" << x << std::endl << "Informe o titulo do arquivo(ou digite exit para sair da funcao): ";
    std::cin >> titulo;
    if (titulo != "exit")
    {
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
            std::cout << "Arquivo nao existente";
        }
    }
}