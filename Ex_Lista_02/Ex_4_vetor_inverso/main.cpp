#include <iostream>

using namespace std;

int main()
{

 int vetorA[20];
 int vetorB[20];

 for(int i = 0; i < 20; i++)
 {
     cout << "Entre com os valores do vetorA: ";
     cin >> vetorA[i];
 }
 cout << endl;
 cout << "Vetor: ";
 for(int i = 0; i < 20; i++)
 {
     cout << vetorA[i] << " ";
     vetorB[i] = vetorA[i];
 }
cout << endl;

cout << "vetor inverso: ";
 for(int i = 19; i >= 0; i--)
 {
     cout << vetorB[i] << " ";
 }



}
