#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int TAMANHO_MAXIMO = 100;
    char string1[TAMANHO_MAXIMO];
    char string2[TAMANHO_MAXIMO];

    cout << "Digite a primeira string: ";
    cin.getline(string1, TAMANHO_MAXIMO);

    cout << "Digite a segunda string: ";
    cin.getline(string2, TAMANHO_MAXIMO);

    cout << "Primeira string: " << string1 << endl;
    cout << "Segunda string: " << string2 << endl;

    if (strlen(string1) >= 2)
    {
        cout << "A segunda letra da primeira string e: " << string1[1] << endl;
    }
    else
    {
        cout << "A primeira string e muito curta para ter uma segunda letra." << endl;
    }

    if (strlen(string2) >= 2)
    {
        cout << "A penultima letra da segunda string e: " << string2[strlen(string2) - 2] << endl;
    }
    else
    {
        cout << "A segunda string e muito curta para ter uma penultima letra." << endl;
    }
    system("pause");

    return 0;
}
