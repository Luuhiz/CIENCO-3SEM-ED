#include <iostream>

using namespace std;

int main()
{
    float vetorTemp[365];
    float total = 0;
    float media = 0;
    float abaixo = 0;
    float menorTemp = 1000;
    float maiorTemp = -1000;

   for(int i = 0; i < 365; i++)
    {
        cout << "Entre com o valor da temperatura por dias: ";
        cin >> vetorTemp[i];
        total += vetorTemp[i];

        if(vetorTemp[i] < menorTemp)
        {
            menorTemp = vetorTemp[i];
        }
        if(vetorTemp[i] > maiorTemp)
        {
           maiorTemp = vetorTemp[i];
        }
    }
    media = total / 365;

    cout << "A temperatura media do ano e: " << media << endl;


    for(int i = 0; i < 365; i++)
    {
        if(vetorTemp[i] < media)
        {
            abaixo++;
        }
    }
    cout << "Menor temperatura: " << menorTemp << endl;
    cout << "Maior temperatura: " << maiorTemp << endl;
    cout << "A quantidade de dias abaixo da media: " << abaixo << endl;
}
