#include <iostream>
#include <cmath> // Para funções matemáticas como sqrt()

using namespace std;

int main()
{
    float notas[5];        // Vetor para armazenar as notas dos alunos
    float desvios[5];      // Vetor para armazenar os desvios em relação à média
    float desviosQuadrado[5]; // Vetor para armazenar os desvios ao quadrado
    float media = 0.0;     // Variável para armazenar a média das notas
    float somaDesviosQuadrado = 0.0; // Variável para armazenar a soma dos desvios ao quadrado
    float variancia = 0.0; // Variável para armazenar a variância
    float desvioPadrao = 0.0; // Variável para armazenar o desvio padrão

    // Leitura das notas dos alunos
    cout << "Digite as notas de 5 alunos:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        media += notas[i]; // Acumula as notas para o cálculo da média
    }

    // Cálculo da média
    media /= 5;

    // Cálculo dos desvios em relação à média e dos desvios ao quadrado
    for (int i = 0; i < 5; i++)
    {
        desvios[i] = notas[i] - media; // Desvio em relação à média
        desviosQuadrado[i] = desvios[i] * desvios[i]; // Desvio ao quadrado
        somaDesviosQuadrado += desviosQuadrado[i]; // Acumula os desvios ao quadrado
    }

    // Cálculo da variância e do desvio padrão
    variancia = somaDesviosQuadrado / 5;
    desvioPadrao = sqrt(variancia); // Raiz quadrada da variância

    // Exibição dos resultados
    cout << "\nMedia das notas: " << media << endl;

    cout << "\nDesvios em relacao a media:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Aluno " << i + 1 << ": " << desvios[i] << endl;
    }

    cout << "\nDesvios ao quadrado:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Aluno " << i + 1 << ": " << desviosQuadrado[i] << endl;
    }

    cout << "\nVariancia: " << variancia << endl;
    cout << "Desvio padrao: " << desvioPadrao << endl;
    system("pause");

    return 0;
}
