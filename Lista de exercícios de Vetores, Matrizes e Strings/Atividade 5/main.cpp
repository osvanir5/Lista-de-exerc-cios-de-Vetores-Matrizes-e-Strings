#include <iostream>

using namespace std;

int main()
{
    int V1[10];
    int V2[10];

    cout << "Digite 10 valores inteiros para o vetor V1:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> V1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            V2[i] = V1[i] * 5;
        }
        else
        {
            V2[i] = V1[i] + 5;
        }
    }

    cout << "\nConteudo do vetor V1:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << V1[i] << " ";
    }

    cout << "\n\nConteudo do vetor V2:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << V2[i] << " ";
    }

    cout << endl;
    system("pause");
    return 0;
}
