#include <iostream>

using namespace std;

void imprimeVetor(int x[])
{
    for(int i = 0; i <= 4; i++)
    {
        cout << i + 1 << " Numero: " << x[i] << endl;
    }
}

void bubbleSort2(int x[])
{
    int aux = 0;
    //ordenando de forma cescente
    //la�o com a quantidade de elementos do vetor - 1
    for(int j = 1; j <= 4; j++)
    {
        for(int i = 4; i >= j;i--)
        {
            if(x[i] < x[i - 1])

            {aux = x[i];
            x[i] = x[i - 1];
            x[i - 1] = aux;
            }
        }
    }

}



int main(int argc, char** argv)
{

   int x[5];

   //carregando os numeros no vetor
   for(int i =0; i <= 4; i++)
   {
       cout << "Digite o numero: ";
       cin >> x[i];
   }

   bubbleSort2(x);
   imprimeVetor(x);

   return 0;

}
