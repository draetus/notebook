#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream myfile;
    string title,texto,textocompleto,teste;
    while(title != "exit")
    {
        cout << "Digite o titulo(ou exit para sair): ";
        cin >> title;
        if(title != "exit")
        {
            myfile.open(title);
            cout << "Digite return para voltar" << endl;
            while(texto != "return")
            {
                textocompleto += texto + " ";
                cin >> texto;
            }
            cout << "Arquivo criado" << endl << title << endl << endl << textocompleto << endl << endl;
            myfile << textocompleto;
            myfile.close();
        }
    }
    return 0;
}
