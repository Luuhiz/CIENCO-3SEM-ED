#include <iostream>
#include <queue>
#include <string>

using namespace std;



int main()
{
   int opcao = 0;
   string cliente;

   queue <string> aux;
   queue <string> fila;

  do
    {
        cout << "Escolha uma opcao: " << endl;
        cout << "1. Inserir cliente na fila" << endl;
        cout << "2. Atender o proximo cliente" << endl;
        cout << "3. Exibir fila de espera" << endl;
        cout << "4. Encerrar o programa" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao)
        {
        case 1:
            {

                cout << "Digite um nome do cliente: ";
                cin >> cliente;
                fila.push(cliente);
            }
                break;

        case 2:
            {
                cout << "Atendendo o cliente: " << fila.front() << endl;
                fila.pop();
            }
            break;

        case 3:
            {
                cout << "Atualmente temos: " << fila.size() << endl;
                if(!fila.empty())
                {
                    aux = fila;
                }
                while(!aux.empty())
                {
                    cout << aux.front() << endl;
                    aux.pop();
                }
            }
    }
    }while(opcao != 4);
}





