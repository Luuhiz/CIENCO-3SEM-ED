#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    //Variaveis
    float numH, valorH, salMin, salBruto,imposto,salLiq;

    //Entrada de dados
    cout  << "Digite o valor do sal�rio m�nimo: ";
    cin >> salMin;

    cout << "Digite o valor de horas trabalhadas: ";
    cin >> numH;

    //Processamento
    valorH = salMin / 2;
    salBruto = numH * valorH;
    imposto = salBruto * 3/100;
    salLiq = salBruto - imposto;

    cout << "O Sal�rio que vai receber e: " << salLiq;


}
