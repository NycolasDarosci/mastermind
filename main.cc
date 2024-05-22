#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    
    char opcao, dificuldade = 'm';
    int tentativas;
        
    srand(time(NULL));
    
    do {
        cout << "Bem-vindo ao mastermind!\nEscolha uma opcao:" << endl;
        cout << "Jogar(j)" << endl;
        cout << "Dificuldade(d)" << endl;
        cout << "Sobre(s)" << endl;
        cout << "Fim(f)" << endl;
        cin >> opcao;
        
        system("cls");
        
        if (opcao == 'd') {
            do {
                cout << "Escolha uma dificuldade: " << endl;
                cout << "Fácil(f)" << endl;
                cout << "Média(m)" << endl;
                cout << "Difícil(d)" << endl;
                cin >> dificuldade;
            } while (
                dificuldade != 'f' &&
                dificuldade != 'm' &&
                dificuldade != 'd'
            );
            
            if (dificuldade == 'f') cout << "Dificuldade fácil escolhida!" << endl;
            else if (dificuldade == 'm') cout << "Dificuldade média escolhida!" << endl;
            else cout << "Dificuldade difícil escolhida!" << endl;
        }
        
        if (opcao == 'j')
        {
            cout << "Você começou o jogo!" << endl;
    
            if (dificuldade == 'f')
            {
                int num1, num2, num3;
                tentativas = 8;
                
                do {
                    num1 = rand() % 7;
                    num2 = rand() % 7;
                    num3 = rand() % 7;
                } while (
                    num1 == num2 || num1 == num3 || num2 == num3 ||
                    num1 == 0 || num2 == 0 || num3 == 0
                );
                cout << num1 << endl;
                cout << num2 << endl;
                cout << num3 << endl;
            
                // trabalhando ainda..
                int primeiroNumeroInserido, segundoNumeroInserido, terceiroNumeroInserido;
    
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
    
            if (dificuldade == 'm')
            {
                int num1, num2, num3,num4;
                tentativas = 10;
                
                do {
                    num1 = rand() % 7;
                    num2 = rand() % 7;
                    num3 = rand() % 7;
                    num4 = rand() % 7; 
                } while (
                    num1 == num2 || num1 == num3 || num1 == num4 ||
                    num2 == num3 || num2 == num4 ||
                    num3 == num4 ||
                    num1 == 0 || num2 == 0 || num3 == 0 || num4 == 0
                );
                cout << num1 << endl;
                cout << num2 << endl;
                cout << num3 << endl;
                cout << num4 << endl;
    
                // trabalhando ainda..
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
    
            if (dificuldade == 'd')
            {
                int num1, num2, num3, num4, num5;
                tentativas = 12;
                
                do {
                    num1 = rand() % 7;
                    num2 = rand() % 7;
                    num3 = rand() % 7;
                    num4 = rand() % 7;
                    num5 = rand() % 7;
                } while (
                    num1 == num2 || num1 == num3 || num1 == num4 || 
                    num1 == num5 || num2 == num3 || num2 == num4 || 
                    num2 == num5 || num3 == num4 || num3 == num5 ||
                    num4 == num5 || num1 == 0 || num2 == 0 || 
                    num3 == 0 || num4 == 0 || num5 == 0
                );
                cout << num1 << endl;
                cout << num2 << endl;
                cout << num3 << endl;
                cout << num4 << endl;
                cout << num5 << endl;    
                
                // trabalhando ainda..
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
    
        if (opcao == 's') {
            cout << "A nossa equipe é composta por Caio Stuart, Heloisa Born, Nycolas Darosci. O nosso trabalho foi produzido durante o mês de maio de 2024, sob a tutoria do professor Eduardo Alves." << endl;
        }
    
    } while (opcao != 'f');

    if (opcao == 'f')
    {
        cout << "Você saiu do mastermind.";
    }

    return 0;
}