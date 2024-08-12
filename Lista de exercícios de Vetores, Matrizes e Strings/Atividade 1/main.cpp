#include <iostream>

using namespace std;

int main()
{
    float vetor[5];
    float soma_Impares = 0;
    cout << "Digite 5 numeros:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (static_cast<int>(vetor[i]) % 2 != 0)
        {
            soma_Impares += vetor[i];
        }
    }

    cout << "A soma dos elementos impares e: " << soma_Impares << endl;
    system("pause");
    return 0;
}

