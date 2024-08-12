#include <iostream>
#include <cstring>  // Para as funções da biblioteca C

using namespace std;

int main()
{
    const int TAMANHO_MAXIMO = 100;
    char nome[TAMANHO_MAXIMO];
    char menorNome[TAMANHO_MAXIMO];

    cout << "Digite nomes (pressione Enter em uma linha vazia para terminar):" << endl;

    menorNome[0] = '\0';

    while (true)
    {
        cin.getline(nome, TAMANHO_MAXIMO);

        if (nome[0] == '\0')
        {
            break;
        }

        if (menorNome[0] == '\0' || strcmp(nome, menorNome) < 0)
        {
            strcpy(menorNome, nome);
        }
    }

    if (menorNome[0] != '\0')
    {
        cout << "O nome lexicograficamente menor e: " << menorNome << endl;
    }
    else
    {
        cout << "Nenhum nome foi inserido." << endl;
    }
    system("pause");
    return 0;
}
