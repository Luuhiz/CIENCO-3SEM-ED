#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL,"PORTUGUESE");
    float pe,valor;
    char cp;

    cout << "Entre com o preço do produto:R$ ";
    cin >> pe;

    cout << "Digite os seguintes codigos para codicao do pagamento\n";
    cout << "(1) A vista em dinheiro ou cheque, com 10% de desconto\n";
    cout << "(2) A vista com cartao de credito, com 5% de desconto\n";
    cout << "(3) Em 2 vezes, preco normal de etiqueta sem juros\n";
    cout << "(4) Em 3 vezes, preco de etiqueta com acrescimo de 10%\n";
    cout << "Condicao: ";
    cin >> cp;

    switch(cp)
    {
    case '1':
        valor = pe - (pe * 0.10);
        cout << "valor que deve ser pago é: " << valor;
        break;

    case '2':
       valor = pe - (pe * 0.05);
       cout << "valor que deve ser pago é: " << valor;
       break;

    case '3':
       valor = pe  / 2;
       cout << "valor que deve ser pago é: " << valor;
       break;

    case '4':
       valor = pe + (pe * 0.10);
       valor = valor / 3;
       cout << "valor que deve ser pago é: " << valor;
       break;

    default:
       cout << "Código inexistente\n";
       break;
    }

return 0;
}
