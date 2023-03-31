#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

struct pessoa
{
    string nome;
    string endereco;
    int idade;
    int cpf;
};



int main()
{
    pessoa documento[5];

    for(int i = 0; i < 5; i++)
    {
      cout << "Qual seu nome: ";
      getline(cin, documento[i].nome);
      cout << "Qual seu endereco: ";
      getline(cin, documento[i].endereco);
      cout << "Qual seu cpf: ";
      cin >> documento[i].cpf;
      cout << "Qual sua idade: ";
      cin >> documento[i].idade;
      cout << "-------------------------" << endl;

      cin.ignore();

      system(" CLS || clear ");
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "Nome: " << documento[i].nome << endl;
        cout << "Endereco: " << documento[i].endereco << endl;
        cout << "Cpf: " << documento[i].cpf << endl;
        cout << "Idade: " << documento[i].idade << endl;
        cout << "-------------------------" << endl;
    }



}
