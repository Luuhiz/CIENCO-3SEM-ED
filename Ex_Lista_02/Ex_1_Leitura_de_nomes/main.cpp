#include <iostream>
#include <string.h>
using namespace std;

#define QUANTPESSOAS 10

string hipotese;
void nomesIguais(string nomes[])
{
    int quantidade = 0;
    while(quantidade < QUANTPESSOAS)
    {
        if(nomes[quantidade] != hipotese)
        {
            cout << "Nao achei" << endl;
        }
        else
        {
            cout << "Achei" << endl;
        }
        quantidade++;
    }


}
int main()
{
    string nomes[QUANTPESSOAS];
    int quantidade = 0;
    while(quantidade < QUANTPESSOAS)
    {
        cout << "Entre com o nome: ";
        cin >> nomes[quantidade];
        quantidade++;
    }

    cout << "Entre com um nome hipotese: ";
    cin >> hipotese;

    nomesIguais(nomes);

}
