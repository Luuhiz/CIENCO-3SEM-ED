#include <iostream>

using namespace std;

int main()
{
   int n;

   cout << "Defina o tamanho dos vetores: ";
   cin >> n;

   int vetorA[n];
   int vetorB[n];
   int vetorSoma[n];

   for(int i = 0; i < n; i++)
   {
       cout << "VetorA: ";
       cin >> vetorA[i];

       cout << "VetorB: ";
       cin >> vetorB[i];

       vetorSoma[i] = vetorA[i] + vetorB[i];
   }

   cout << "Vetor A:";
   for(int i = 0; i < n; i++)
   {
       cout << vetorA[i] << " ";
   }
   cout << endl;

   cout << "Vetor B: ";
    for(int i = 0; i < n; i++)
   {
       cout << vetorB[i] << " ";
   }
   cout << endl;
   cout << "Soma: ";
    for(int i = 0; i < n; i++)
   {
       cout <<vetorSoma[i] << " ";
   }


}
