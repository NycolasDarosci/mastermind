#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    
    char opcao, dificuldade = 'm';
    int tentativas;
        
    do {
        cout << "Bem-vindo ao mastermind!\nMenu:" << endl;
        cout << "Jogar(j)" << endl;
        cout << "Dificuldade(d)" << endl;
        cout << "Sobre(s)" << endl;
        cout << "Fim(f)" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cout << "\n";
        
        system("cls");
        
        if (opcao == 'd') {
            do {
                cout << "Fácil(f)" << endl;
                cout << "Média(m)" << endl;
                cout << "Difícil(d)" << endl;
                cout << "Escolha uma dificuldade: "; 
                cin >> dificuldade;
                cout << "\n";
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
            system("cls");
            cout << "Você começou o jogo!" << endl;
        
            srand(time(NULL));
            
            // dificuldade fácil feito;
            if (dificuldade == 'f')
            {
                int num1, num2, num3, 
                    primeiro_digito, segundo_digito, terceiro_digito;
                    
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
                
                do {
                    int num_correto = 0,
                        num_incorreto = 0,
                        posicao_correta = 0,
                        posicao_incorreta = 0;
                    
                    do {
                        cout << "Digite três número de 1 a 6!" << endl;
                        
                        cout << "Insira o primeiro número: ";
                        cin >> primeiro_digito;
                        cout << "Insira o segundo número: ";
                        cin >> segundo_digito;
                        cout << "Insira o terceiro número: ";
                        cin >> terceiro_digito;
                        
                        if (primeiro_digito == segundo_digito ||
                            primeiro_digito == terceiro_digito ||
                            segundo_digito == terceiro_digito ||
                            (primeiro_digito < 1 || primeiro_digito > 6) ||
                            (segundo_digito < 1 || segundo_digito > 6) ||
                            (terceiro_digito < 1 || terceiro_digito > 6)
                        ) {
                          cout << "Não pode digitar números repetidos e abaixo de 1 ou acima de 6! Digite novamente.\n" << endl;  
                        } 
                    }
                    while (
                        primeiro_digito == segundo_digito ||
                        primeiro_digito == terceiro_digito ||
                        segundo_digito == terceiro_digito ||
                        (primeiro_digito < 1 || primeiro_digito > 6) ||
                        (segundo_digito < 1 || segundo_digito > 6) ||
                        (terceiro_digito < 1 || terceiro_digito > 6)
                    );
                    
                    if (primeiro_digito == num1 && 
                        segundo_digito == num2 && 
                        terceiro_digito == num3
                    ) {
                        cout << "Parabéns! Você acertou toda a sequência de números nas casas correta. Sequência: \n" << num1 << " " << num2 << " " << num3 << endl;
                        break;
                    }
                        
                    if (primeiro_digito == num1){
                        num_correto++;
                        posicao_correta++;
                    }
        
                    if (primeiro_digito == num2 || primeiro_digito == num3)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
        
                    if (primeiro_digito != num1 && primeiro_digito != num2 && primeiro_digito != num3)
                    {
                        num_incorreto++;
                    }
        
                    if (segundo_digito == num2)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
        
                    if (segundo_digito == num1 || segundo_digito == num3)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
        
                    if (segundo_digito != num1 && segundo_digito != num2 && segundo_digito != num3)
                    {
                        num_incorreto++;
                    }
        
                    if (terceiro_digito == num3)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
        
                    if (terceiro_digito == num1 || terceiro_digito == num2)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
        
                    if (terceiro_digito != num1 && terceiro_digito != num2 && terceiro_digito != num3)
                    {
                        num_incorreto++;
                    }
                    
                    cout << "Dígitos corretos: " << num_correto << endl;
                    cout << "Posições corretas: " << posicao_correta << endl;
                    cout << "Dígitos incorretos: " << num_incorreto << endl;
                    
                    tentativas--;
                    cout << "\nVocê possui " << tentativas << " tentativas restantes!\n" << endl;
                    if (tentativas == 0) cout << "Infelizmente suas chances acabaram! Tente novamente.\n" << endl;
                }
                while (tentativas != 0);
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