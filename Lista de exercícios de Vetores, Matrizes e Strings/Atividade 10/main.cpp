#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    double salario, novoSalario, diferenca;
    char cargo[50];
    double percentual = 0.05;

    cout << "Digite o salario atual: ";
    cin >> salario;
    cin.ignore();

    cout << "Digite o cargo do funcionario (Gerente, Engenheiro, Tecnico): ";
    cin.getline(cargo, 50);

    for (int i = 0; cargo[i]; i++)
    {
        cargo[i] = tolower(cargo[i]);
    }

    if (strcmp(cargo, "gerente") == 0)
    {
        percentual = 0.10;
    }
    else if (strcmp(cargo, "engenheiro") == 0)
    {
        percentual = 0.20;
    }
    else if (strcmp(cargo, "tecnico") == 0)
    {
        percentual = 0.30;
    }

    novoSalario = salario + (salario * percentual);
    diferenca = novoSalario - salario;

    cout << "\nSalario antigo: R$ " << salario << endl;
    cout << "Novo salario: R$ " << novoSalario << endl;
    cout << "Diferenca: R$ " << diferenca << endl;
    system("pause");
    return 0;
}
