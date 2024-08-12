#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n;
    int vetor[10];
    int maior_1, maior_2;
    int somaParesPosImpares = 0;

    cout << "Digite a quantidade de elementos (ate 10): ";
    cin >> n;

    if (n > 10 || n <= 0)
    {
        cout << "Quantidade invalida! O programa aceita entre 1 e 10 elementos." << endl;
        return 1;
    }

    cout << "Digite " << n << " valores inteiros positivos:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
        if (vetor[i] <= 0)
        {
            cout << "Valor invalido! Apenas inteiros positivos sao permitidos." << endl;
            return 1;
        }
    }

    maior_1 = maior_2 = numeric_limits<int>::min();

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maior_1)
        {
            maior_2 = maior_1;
            maior_1 = vetor[i];
        }
        else if (vetor[i] > maior_2)
        {
            maior_2 = vetor[i];
        }
    }

    for (int i = 1; i < n; i += 2)
    {
        if (vetor[i] % 2 == 0)
        {
            somaParesPosImpares += vetor[i];
        }
    }

    cout << "Os dois maiores elementos sao: " << maior_1 << " e " << maior_2 << endl;
    cout << "A soma dos elementos pares em posicoes impares e: " << somaParesPosImpares << endl;
    system("pause");

    return 0;
}
