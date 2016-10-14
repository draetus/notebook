#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string argumento1,argumento2,argumento3,title;
    string texto;
    ofstream myfile;
    while(argumento1 != "exit")
    {
        cin >> argumento1 >> argumento2 >> argumento3;
        if(argumento1 == "notebook")
        {
            if (argumento2 == "write")
            {
                if(argumento3 == "title") //funcao de criar arquivo
                {
                    cout << "Digite return para voltar ao inicio" << endl;
                    cout << "Informe o titulo do arquivo: ";
                    while(title != "return")
                    {
                        cin >> title;
                        myfile.open(title);
                    }
                }
                else
                {
                    cout << "Argumentos validos:"<<endl<< "title" <<endl;
                }
                if(argumento3 == "content") //funcao de escrever no arquivo
                {
                    cout << "Digite return para voltar ao inicio" << endl;
                    cout << "Informe o arquivo que voce deseja escrever :" << endl;
                    cin >> title;
                    myfile.open(title);
                    while(texto != "return")
                    {
                        cin >> texto;
                        getline(cin,texto);
                        myfile << texto << endl;
                    }
                }
                else
                {
                    cout << "content"<<endl;
                }
            }
            else
            {
                cout << "Argumento valido: write"<<endl;
            }
        }
        else
        {
            cout << "Argumento valido : notebook"<<endl;
        }
    }
    return 0;
}
