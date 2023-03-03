#include <iostream>

using namespace std;

int main()
{

    float peso, altura,imc;


    cout << "Entre com um Peso e Altura para saber seu IMC\n";
    cout << "Peso: ";
    cin >> peso;
    cout << "Altura: ";
    cin >> altura;

    imc = (peso / (altura * altura));
    {
        if(imc < 20)
        {
            cout << "Abaixo do Peso";
        }
        else if(imc < 25)
        {
            cout << "Peso ideal";
        }
        else
        {
            cout << "Acima do Peso";
        }
    }





}
