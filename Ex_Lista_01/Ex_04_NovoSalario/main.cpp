#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL,"PORTUGUESE");
  float salario,novoSal;

  cout << "Entre com seu sal�rio para saber o seu reajuste: ";
  cin >> salario;


  if(salario <= 1000)
  {
      novoSal = (salario * 0.15) + salario;
  }
  else if((salario >= 1000) && (salario <= 1500))
  {
      novoSal = (salario * 0.10) + salario;
  }
  else
  {
      novoSal = (salario * 0.5) + salario;
  }

  cout << "Ent�o seu novo sal�rio �: " << novoSal;


}
