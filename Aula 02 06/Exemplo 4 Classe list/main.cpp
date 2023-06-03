#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprimirLista(const list<int>& lista)
{
    list<int>::const_iterator elemento;
    if(lista.empty())
    {
        cout << "Lista vazia\n";
    }
    else
    {
        elemento = lista.begin();
        do
        {
            cout << *elemento << " ";
            elemento++;
        }while(elemento != lista.end());
        cout << endl;
    }
}

int main()
{

list<int> lista;
lista.push_back(1);
lista.push_back(5);
lista.push_front(3);
lista.push_front(2);
imprimirLista(lista);
cout << "A lista tem " << lista.size() << " elementos" << endl << endl;
lista.sort();
imprimirLista(lista);
lista.remove(5);
imprimirLista(lista);
lista.reverse();
imprimirLista(lista);
lista.push_back(2);
imprimirLista(lista);
lista.push_front(2);
imprimirLista(lista);
lista.sort();
imprimirLista(lista);


}
