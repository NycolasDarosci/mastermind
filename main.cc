#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    string opcao;
    string dificuldade = "m";

    cout << "Bem-vindo ao mastermindo! Estas são as opções:" << endl;
    cout << "Jogar(j)" << endl;
    cout << "Dificuldade(d)" << endl;
    cout << "Sobre(s)" << endl;
    cout << "Fim(f)" << endl;
    cin >> opcao;

    srand(time(NULL));

    if (opcao == "j")
    {
        cout << "Você começou o jogo!" << endl;

        if (dificuldade == "f")
        {
            int num1 = 0;
            int num2 = 0;
            int num3 = 0;

            for (int i = 0; i < 3; i++)
            {
                int numeroAtual = rand() % 6;

                while (numeroAtual == num1 || numeroAtual == num2 || numeroAtual == num3)
                {
                    numeroAtual = rand() % 6;
                }

                if (num1 == 0)
                {
                    num1 = numeroAtual;

                    continue;
                }

                if (num2 == 0)
                {
                    num2 = numeroAtual;

                    continue;
                }

                if (num3 == 0)
                {
                    num3 = numeroAtual;

                    continue;
                }
            }

            int primeiroNumeroInserido;
            int segundoNumeroInserido;
            int terceiroNumeroInserido;

            cout << "Insira o primeiro número: " << endl;
            cin >> primeiroNumeroInserido;

            cout << "Insira o segundo número: " << endl;
            cin >> segundoNumeroInserido;

            cout << "Insira o terceiro número: " << endl;
            cin >> terceiroNumeroInserido;

            if (primeiroNumeroInserido == num1)
            {
                cout << "Você acertou o primeiro número!" << endl;
            }

            if (primeiroNumeroInserido == num2 || primeiroNumeroInserido == num3)
            {
                cout << "O primeiro número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (primeiroNumeroInserido != num1 && primeiroNumeroInserido != num2 && primeiroNumeroInserido != num3)
            {
                cout << "Este número não existe!" << endl;
            }

            if (segundoNumeroInserido == num2)
            {
                cout << "Você acertou o segundo número!" << endl;
            }

            if (segundoNumeroInserido == num1 || segundoNumeroInserido == num3)
            {
                cout << "O segundo número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (segundoNumeroInserido != num1 && segundoNumeroInserido != num2 && segundoNumeroInserido != num3)
            {
                cout << "Este número não existe!" << endl;
            }

            if (terceiroNumeroInserido == num3)
            {
                cout << "Você acertou o terceiro número!" << endl;
            }

            if (terceiroNumeroInserido == num1 || terceiroNumeroInserido == num2)
            {
                cout << "O terceiro número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (terceiroNumeroInserido != num1 && terceiroNumeroInserido != num2 && terceiroNumeroInserido != num3)
            {
                cout << "Este número não existe!" << endl;
            }
        }

        if (dificuldade == "m")
        {
            int num1 = 0;
            int num2 = 0;
            int num3 = 0;
            int num4 = 0;

            for (int i = 0; i < 4; i++)
            {
                int numeroAtual = rand() % 6;

                while (numeroAtual == num1 || numeroAtual == num2 || numeroAtual == num3 || numeroAtual == num4)
                {
                    numeroAtual = rand() % 6;
                }

                if (num1 == 0)
                {
                    num1 = numeroAtual;

                    continue;
                }

                if (num2 == 0)
                {
                    num2 = numeroAtual;

                    continue;
                }

                if (num3 == 0)
                {
                    num3 = numeroAtual;

                    continue;
                }

                if (num4 == 0)
                {
                    num4 = numeroAtual;

                    continue;
                }
            }
            int primeiroNumeroInserido;
            int segundoNumeroInserido;
            int terceiroNumeroInserido;
            int quartoNumeroInserido;

            cout << "Insira o primeiro número: " << endl;
            cin >> primeiroNumeroInserido;

            cout << "Insira o segundo número: " << endl;
            cin >> segundoNumeroInserido;

            cout << "Insira o terceiro número: " << endl;
            cin >> terceiroNumeroInserido;

            cout << "Insira o quarto número: " << endl;
            cin >> quartoNumeroInserido;

            if (primeiroNumeroInserido == num1)
            {
                cout << "Você acertou o primeiro número!" << endl;
            }

            if (primeiroNumeroInserido == num2 || primeiroNumeroInserido == num3 || primeiroNumeroInserido == num4)
            {
                cout << "O primeiro número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (primeiroNumeroInserido != num1 && primeiroNumeroInserido != num2 && primeiroNumeroInserido != num3 && primeiroNumeroInserido != num4)
            {
                cout << "Este número não existe!" << endl;
            }

            if (segundoNumeroInserido == num2)
            {
                cout << "Você acertou o segundo número!" << endl;
            }

            if (segundoNumeroInserido == num1 || segundoNumeroInserido == num3 || segundoNumeroInserido == num4)
            {
                cout << "O segundo número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (segundoNumeroInserido != num1 && segundoNumeroInserido != num2 && segundoNumeroInserido != num3 && segundoNumeroInserido != num4)
            {
                cout << "Este número não existe!" << endl;
            }

            if (terceiroNumeroInserido == num3)
            {
                cout << "Você acertou o terceiro número!" << endl;
            }

            if (terceiroNumeroInserido == num1 || terceiroNumeroInserido == num2 || terceiroNumeroInserido == num4)
            {
                cout << "O terceiro número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (terceiroNumeroInserido != num1 && terceiroNumeroInserido != num2 && terceiroNumeroInserido != num3 && terceiroNumeroInserido != num4)
            {
                cout << "Este número não existe!" << endl;
            }

            if (quartoNumeroInserido == num4)
            {
                cout << "Você acertou o quarto número!" << endl;
            }

            if (quartoNumeroInserido == num1 || quartoNumeroInserido == num2 || quartoNumeroInserido == num3)
            {
                cout << "O quarto número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (quartoNumeroInserido != num1 && quartoNumeroInserido != num2 && quartoNumeroInserido != num3 && quartoNumeroInserido != num4)
            {
                cout << "Este número não existe!" << endl;
            }
        }

        if (dificuldade == "d")
        {
            int num1 = 0;
            int num2 = 0;
            int num3 = 0;
            int num4 = 0;
            int num5 = 0;

            for (int i = 0; i < 5; i++)
            {
                int numeroAtual = rand() % 6;

                while (numeroAtual == num1 || numeroAtual == num2 || numeroAtual == num3 || numeroAtual == num4 || numeroAtual == num4)
                {
                    numeroAtual = rand() % 6;
                }

                if (num1 == 0)
                {
                    num1 = numeroAtual;

                    continue;
                }

                if (num2 == 0)
                {
                    num2 = numeroAtual;

                    continue;
                }

                if (num3 == 0)
                {
                    num3 = numeroAtual;

                    continue;
                }

                if (num4 == 0)
                {
                    num4 = numeroAtual;

                    continue;
                }

                if (num5 == 0)
                {
                    num5 = numeroAtual;

                    continue;
                }
            }
            int primeiroNumeroInserido;
            int segundoNumeroInserido;
            int terceiroNumeroInserido;
            int quartoNumeroInserido;
            int quintoNumeroInserido;

            cout << "Insira o primeiro número: " << endl;
            cin >> primeiroNumeroInserido;

            cout << "Insira o segundo número: " << endl;
            cin >> segundoNumeroInserido;

            cout << "Insira o terceiro número: " << endl;
            cin >> terceiroNumeroInserido;

            cout << "Insira o quarto número: " << endl;
            cin >> quartoNumeroInserido;

            cout << "Insira o quinto número: " << endl;
            cin >> quintoNumeroInserido;

            if (primeiroNumeroInserido == num1)
            {
                cout << "Você acertou o primeiro número!" << endl;
            }

            if (primeiroNumeroInserido == num2 || primeiroNumeroInserido == num3 || primeiroNumeroInserido == num4 || primeiroNumeroInserido == num5)
            {
                cout << "O primeiro número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (primeiroNumeroInserido != num1 && primeiroNumeroInserido != num2 && primeiroNumeroInserido != num3 && primeiroNumeroInserido != num4 && primeiroNumeroInserido == num5)
            {
                cout << "Este número não existe!" << endl;
            }

            if (segundoNumeroInserido == num2)
            {
                cout << "Você acertou o segundo número!" << endl;
            }

            if (segundoNumeroInserido == num1 || segundoNumeroInserido == num3 || segundoNumeroInserido == num4 || primeiroNumeroInserido == num5)
            {
                cout << "O segundo número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (segundoNumeroInserido != num1 && segundoNumeroInserido != num2 && segundoNumeroInserido != num3 && segundoNumeroInserido != num4 && segundoNumeroInserido == num5)
            {
                cout << "Este número não existe!" << endl;
            }

            if (terceiroNumeroInserido == num3)
            {
                cout << "Você acertou o terceiro número!" << endl;
            }

            if (terceiroNumeroInserido == num1 || terceiroNumeroInserido == num2 || terceiroNumeroInserido == num4 || terceiroNumeroInserido == num5)
            {
                cout << "O terceiro número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (terceiroNumeroInserido != num1 && terceiroNumeroInserido != num2 && terceiroNumeroInserido != num3 && terceiroNumeroInserido != num4)
            {
                cout << "Este número não existe!" << endl;
            }

            if (quartoNumeroInserido == num4)
            {
                cout << "Você acertou o quarto número!" << endl;
            }

            if (quartoNumeroInserido == num1 || quartoNumeroInserido == num2 || quartoNumeroInserido == num3 || quartoNumeroInserido == num5)
            {
                cout << "O quarto número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (quartoNumeroInserido != num1 && quartoNumeroInserido != num2 && quartoNumeroInserido != num3 && quartoNumeroInserido != num4 && quartoNumeroInserido == num5)
            {
                cout << "Este número não existe!" << endl;
            }

            if (quintoNumeroInserido == num5)
            {
                cout << "Você acertou o quarto número!" << endl;
            }

            if (quintoNumeroInserido == num1 || quintoNumeroInserido == num2 || quintoNumeroInserido == num3 || quintoNumeroInserido == num4)
            {
                cout << "O quarto número existe, mas não está na posição em que foi inserido." << endl;
            }

            if (quintoNumeroInserido != num1 && quintoNumeroInserido != num2 && quintoNumeroInserido != num3 && quintoNumeroInserido != num4 && quintoNumeroInserido != num5)
            {
                cout << "Este número não existe!" << endl;
            }
        }
    }
    if (opcao == "d")
    {
        cout << "Escolha uma dificuldade: " << endl;
        cout << "Fácil(f)" << endl;
        cout << "Média(m)" << endl;
        cout << "Difícil(d)" << endl;
        cin >> dificuldade;
    }

    if (opcao == "s")
    {
        cout << "A nossa equipe é composta por Caio Stuart, Heloisa Born, Nicolas Darosci. O nosso trabalho foi produzido durante o mês de maio de 2024, sob a tutoria do professor Eduardo Alves." << endl;
        cout << "Isto é tudo :)" << endl;
    }

    if (opcao == "f")
    {
        cout << "Você saiu do mastermind.";
        return 0;
    }

    return 0;
}