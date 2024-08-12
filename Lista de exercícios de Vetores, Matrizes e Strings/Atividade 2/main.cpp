#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quantidade[5];
    float preco[5];
    float totalPorProduto[5];
    float valorTotalCompra = 0.0;

    cout << "Digite a quantidade comprada de 5 produtos:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Quantidade do produto " << i + 1 << ": ";
        cin >> quantidade[i];
    }

    cout << "\nDigite o valor unitario de cada produto:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Valor unitario do produto " << i + 1 << ": ";
        cin >> preco[i];
    }

    for (int i = 0; i < 5; i++)
    {
        totalPorProduto[i] = quantidade[i] * preco[i];
        valorTotalCompra += totalPorProduto[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nValor a ser pago por cada produto:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Produto " << i + 1 << ": R$ " << totalPorProduto[i] << endl;
    }
    cout << "\nValor total da compra: R$ " << valorTotalCompra << endl;
    system("pause");

    return 0;
}
