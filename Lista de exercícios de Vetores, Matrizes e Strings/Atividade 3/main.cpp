#include <iostream>
#include <cmath> // Para fun��es matem�ticas como sqrt()

using namespace std;

int main()
{
    float notas[5];        // Vetor para armazenar as notas dos alunos
    float desvios[5];      // Vetor para armazenar os desvios em rela��o � m�dia
    float desviosQuadrado[5]; // Vetor para armazenar os desvios ao quadrado
    float media = 0.0;     // Vari�vel para armazenar a m�dia das notas
    float somaDesviosQuadrado = 0.0; // Vari�vel para armazenar a soma dos desvios ao quadrado
    float variancia = 0.0; // Vari�vel para armazenar a vari�ncia
    float desvioPadrao = 0.0; // Vari�vel para armazenar o desvio padr�o

    // Leitura das notas dos alunos
    cout << "Digite as notas de 5 alunos:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        media += notas[i]; // Acumula as notas para o c�lculo da m�dia
    }

    // C�lculo da m�dia
    media /= 5;

    // C�lculo dos desvios em rela��o � m�dia e dos desvios ao quadrado
    for (int i = 0; i < 5; i++)
    {
        desvios[i] = notas[i] - media; // Desvio em rela��o � m�dia
        desviosQuadrado[i] = desvios[i] * desvios[i]; // Desvio ao quadrado
        somaDesviosQuadrado += desviosQuadrado[i]; // Acumula os desvios ao quadrado
    }

    // C�lculo da vari�ncia e do desvio padr�o
    variancia = somaDesviosQuadrado / 5;
    desvioPadrao = sqrt(variancia); // Raiz quadrada da vari�ncia

    // Exibi��o dos resultados
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
