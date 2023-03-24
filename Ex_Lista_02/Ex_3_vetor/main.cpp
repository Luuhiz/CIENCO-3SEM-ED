#include <iostream>

using namespace std;

int main()
{

 int vetorA[10];
 int x;
 int vetorM[10];

 for(int i = 0; i < 10; i++)
 {
     cout << "Entre com os valores do vetorA: ";
     cin >> vetorA[i];
 }
 cout << endl;
 cout << "Vetor A: ";
 for(int i = 0; i < 10; i++)
 {
     cout << vetorA[i] << " ";
 }
 cout << endl;
 cout << "Entre com o valor de X para Multiplicar vetorA: ";
 cin >> x;

 for(int i = 0; i < 10; i++)
 {
     vetorM[i] = vetorA[i] * x;
 }
cout << endl;
 for(int i = 0; i < 10; i++)
 {
     cout << vetorM[i] << " ";
 }



}
