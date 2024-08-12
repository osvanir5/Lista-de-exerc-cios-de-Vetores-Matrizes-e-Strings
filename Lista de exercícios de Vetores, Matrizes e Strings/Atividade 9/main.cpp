#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int TAMANHO_MAXIMO = 100;
    char str[TAMANHO_MAXIMO];
    int count = 0;

    cout << "Digite uma string: ";
    cin.getline(str, TAMANHO_MAXIMO);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            str[i] = 'b';
            count++;
        }
    }

    cout << "Numero de caracteres modificados: " << count << endl;
    cout << "String modificada: " << str << endl;

    system("pause");
    return 0;
}
