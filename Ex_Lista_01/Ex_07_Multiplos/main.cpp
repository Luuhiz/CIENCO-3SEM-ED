#include <iostream>

using namespace std;

int main()
{

   int resposta = 0;
   int num = 1;

   while(resposta < 500)
   {
       resposta = 5 * num;
       cout << resposta << " ";
       num++;
   }

}
