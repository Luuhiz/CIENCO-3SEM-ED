#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>

using namespace std;

typedef struct
{
    string nome;
    string especie;
    int idade;
    float peso;

}Animal;

typedef struct
{
   Animal lista;

}ListaAnimal;

int main()
{
   ListaAnimal dados[10];

   for(int i = 0; i < 10; i++)
   {
       cout << "Entre com o nome do animal: ";
       getline(cin, dados[i].lista.nome);
       cout << "Entre com a epecie do animal: ";
       getline(cin, dados[i].lista.especie);
       cout << "Entre com a idade do animal: ";
       cin >> dados[i].lista.idade;
       cout << "Entre com o peso do animal em kg: ";
       cin >> dados[i].lista.peso;

       cin.ignore();
   }

   system("CLS || CLEAR");

   cout << "Nome" << "\tEspecie" << "\tIdade" << "\tPeso" << endl;

   for(int i = 0; i < 10; i++)
   {
       cout << dados[i].lista.nome
        << "\t" << dados[i].lista.especie
        << "\t" << dados[i].lista.idade
        << "\t" << dados[i].lista.peso << endl;
   }
}
