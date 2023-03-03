#include <iostream>
#include <locale>

using namespace std;


int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    int candidato1 = 0, candidato2 = 0, votosNulos = 0, votosBrancos = 0, voto;

    cout << "Entre com um valor para fazer a votação e para finalizar basta entrar com o 0\n";
    cout <<  "1: para o primeiro canditado\n";
    cout <<  "2: para o segundo canditado\n";
    cout <<  "3: para votos nulos\n";
    cout <<  "4: para votos em branco\n";

    do {
        cin >> voto;

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                votosNulos++;
                break;
            case 4:
                votosBrancos++;
                break;
            case 0:
                break;
            default:
                cout << "Codigo invalido\n";
                break;
        }
    } while (voto != 0);


    int totalVotos;

    totalVotos = candidato1 + candidato2 + votosNulos + votosBrancos;

    cout << "\nResultados da votacao:\n";
    cout << "Total de votos: " << totalVotos << endl;
    cout << "Percentual de votos para o candidato 1: " << ((double) candidato1 / totalVotos) * 100 << "%" << endl;
    cout << "Percentual de votos para o candidato 2: " << ((double) candidato2 / totalVotos) * 100 << "%" << endl;
    cout << "Percentual de votos nulos: " << ((double) votosNulos / totalVotos) * 100 << "%" << endl;
    cout << "Percentual de votos em branco: " << ((double) votosBrancos / totalVotos) * 100 << "%" << endl;

    return 0;
}
