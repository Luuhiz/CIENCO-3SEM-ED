#include <iostream>
#include <locale>

using namespace std;

int main()
{

   setlocale(LC_ALL,"PORTUGUESE");

   int idade,categoria;

   cout << "Entre com a idade para saber sua categoria: ";
   cin >> idade;

 if((idade >= 5 ) && (idade <= 7))
 {
     cout << "Sua categoria � infantil A";
 }
else if((idade >= 8) && (idade <= 10))
{
    cout << "Sua categoria � infantil B";
}
else if((idade >= 11) && (idade <= 13))
{
    cout << "Sua categoria � Juvenil A";
}
else if((idade >= 14) && (idade <= 17))
{
    cout << "Sua categoria � Juvenil B";
}
else if(idade > 17)
{
    cout << "Sua categoria � Juvenil B";
}
else
{
    cout << "Voc� n�o est� em nenhuma categoria";
}
}
