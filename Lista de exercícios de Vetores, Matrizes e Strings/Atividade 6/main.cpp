#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int M, N;
    int K;
    int matriz[20][25];
    int transposta[25][20];
    int matrizMultiplicada[20][25];
    int matriz2[20][25];
    int matrizSoma[20][25];

    cout << "Digite o numero de linhas (M <= 20): ";
    cin >> M;
    cout << "Digite o numero de colunas (N <= 25): ";
    cin >> N;

    if (M > 20 || N > 25 || M <= 0 || N <= 0)
    {
        cout << "Dimensoes invalidas!" << endl;
        return 1;
    }

    cout << "\nDigite os elementos da matriz (" << M << "x" << N << "):" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "\nDigite o valor do fator K para multiplicacao: ";
    cin >> K;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrizMultiplicada[i][j] = matriz[i][j] * K;
        }
    }

    cout << "\nDigite os elementos da segunda matriz (" << M << "x" << N << "):" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrizSoma[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

    cout << "\nMatriz original:" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }

    cout << "\nMatriz transposta:" << endl;
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            cout << setw(5) << transposta[j][i];
        }
        cout << endl;
    }

    cout << "\nMatriz multiplicada por " << K << ":" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(5) << matrizMultiplicada[i][j];
        }
        cout << endl;
    }

    cout << "\nSoma das duas matrizes:" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(5) << matrizSoma[i][j];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
