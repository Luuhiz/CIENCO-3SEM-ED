#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{

   queue <string> pessoas;

   pessoas.push("RODRIGO"); //Push adiciona elementos na fila
   pessoas.push("ANDRE");
   pessoas.push("MARIA");
   pessoas.push("ANA");
   pessoas.push("JOSE");
   pessoas.push("RITA");

   //size mostra o tamnho da fila

   cout << "Tamanho da Fila: " << pessoas.size() << endl;
   cout << "Primeira pessoa " << pessoas.front() << endl;
   cout << "Ultima pessoa " << pessoas.back() << endl << endl;

   while(!pessoas.empty())
   {
       cout << "Primeira pessoa " << pessoas.front() << endl;
       pessoas.pop(); // retira elementos
   }

   return 0;
}
