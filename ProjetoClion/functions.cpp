#include <iostream>
#include <fstream>

std::string txt(std::string titulo){
    std::string texto,textocompleto;
    std::ofstream myfile;
    myfile.open(titulo);
    std::cout << "Digite return para voltar" << std::endl;
    while(texto != "return")
    {
        textocompleto += texto + " ";
        std::cin >> texto;
    }
    myfile << textocompleto;
    std::cout << titulo;
    myfile.close();
    return textocompleto;
}


std::string titulo(char x){
    std::string textocompleto,titulo;
    std::cout << "Opcao " << x << std::endl;
    while(titulo != "exit")
    {
        std::cout << "Informe o Titulo (ou digite exit para sair da funcao): ";
        std::cin >> titulo;
        if (titulo != "exit")
        {
            textocompleto = txt(titulo);
        }
    }
return textocompleto;
}
