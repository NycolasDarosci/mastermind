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
                // tirar cout da sequência..
                cout << num1 << endl;
                cout << num2 << endl;
                cout << num3 << endl;
                
                do {
                    int num_correto = 0,
                        num_incorreto = 0,
                        posicao_correta = 0,
                        posicao_incorreta = 0;
                    
                    do {
                        cout << "Digite três números de 1 a 6!" << endl;
                        
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
                        cout << "Parabéns! Você acertou toda a sequência de números nas casas corretas. Sequência: \n" << num1 << " " << num2 << " " << num3 << endl;
                        break;
                    }
                        
                    if (primeiro_digito == num1) {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (primeiro_digito == num2 || primeiro_digito == num3)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
        
                    if (segundo_digito == num2) {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (segundo_digito == num1 || segundo_digito == num3)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
        
                    if (terceiro_digito == num3){
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (terceiro_digito == num1 || terceiro_digito == num2)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
                    
                    cout << "Dígitos corretos: " << num_correto << endl;
                    cout << "Posições corretas: " << posicao_correta << endl;
                    cout << "Posições incorretas: " << posicao_incorreta << endl;
                    cout << "Dígitos incorretos: " << num_incorreto << endl;
                    
                    tentativas--;
                    cout << "\nVocê possui " << tentativas << " tentativas restantes!\n" << endl;
                    if (tentativas == 0) cout << "Infelizmente suas chances acabaram! Tente novamente.\n" << endl;
                }
                while (tentativas != 0);
            }
    
            if (dificuldade == 'm')
            {
                int num1, num2, num3, num4,
                    primeiro_digito, segundo_digito, terceiro_digito, quarto_digito;
                    
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
                
                //tirar cout dos numeros..
                cout << num1 << endl;
                cout << num2 << endl;
                cout << num3 << endl;
                cout << num4 << endl;
                
                do {
                    int num_correto = 0,
                        num_incorreto = 0,
                        posicao_correta = 0,
                        posicao_incorreta = 0;
                    
                    do {
                        cout << "Digite quatro números de 1 a 6!" << endl;
                        
                        cout << "Insira o primeiro número: ";
                        cin >> primeiro_digito;
                        cout << "Insira o segundo número: ";
                        cin >> segundo_digito;
                        cout << "Insira o terceiro número: ";
                        cin >> terceiro_digito;
                        cout << "Insira o quarto número: ";
                        cin >> quarto_digito;
                        
                        if (primeiro_digito == segundo_digito ||
                            primeiro_digito == terceiro_digito ||
                            primeiro_digito == quarto_digito ||
                            segundo_digito == terceiro_digito ||
                            segundo_digito == quarto_digito ||
                            terceiro_digito == quarto_digito ||
                            (primeiro_digito < 1 || primeiro_digito > 6) ||
                            (segundo_digito < 1 || segundo_digito > 6) ||
                            (terceiro_digito < 1 || terceiro_digito > 6) ||
                            (quarto_digito < 1 || quarto_digito > 6)
                        ) {
                          cout << "Não pode digitar números repetidos e abaixo de 1 ou acima de 6! Digite novamente.\n" << endl;  
                        } 
                    }
                    while (
                        primeiro_digito == segundo_digito ||
                        primeiro_digito == terceiro_digito ||
                        primeiro_digito == quarto_digito ||
                        segundo_digito == terceiro_digito ||
                        segundo_digito == quarto_digito ||
                        terceiro_digito == quarto_digito ||
                        (primeiro_digito < 1 || primeiro_digito > 6) ||
                        (segundo_digito < 1 || segundo_digito > 6) ||
                        (terceiro_digito < 1 || terceiro_digito > 6) ||
                        (quarto_digito < 1 || quarto_digito > 6)
                    );
                    
                    if (primeiro_digito == num1 && 
                        segundo_digito == num2 && 
                        terceiro_digito == num3 &&
                        quarto_digito == num4
                    ) {
                        cout << "Parabéns! Você acertou toda a sequência de números nas casas corretas. Sequência: \n" << num1 << " " << num2 << " " << num3 << " " <<  num4 << endl;
                        break;
                    }
                    
                    if (primeiro_digito == num1)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (primeiro_digito == num2 || primeiro_digito == num3 || primeiro_digito == num4)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
        
                    if (segundo_digito == num2)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (segundo_digito == num1 || segundo_digito == num3 || segundo_digito == num4)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
        
                    if (terceiro_digito == num3)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (terceiro_digito == num1 || terceiro_digito == num2 || terceiro_digito == num4)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
        
                    if (quarto_digito == num4)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (quarto_digito == num1 || quarto_digito == num2 || quarto_digito == num3)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else
                    {
                        num_incorreto++;
                    }
                    
                    cout << "Dígitos corretos: " << num_correto << endl;
                    cout << "Posições corretas: " << posicao_correta << endl;
                    cout << "Posições incorretas: " << posicao_incorreta << endl;
                    cout << "Dígitos incorretos: " << num_incorreto << endl;
                    
                    tentativas--;
                    cout << "\nVocê possui " << tentativas << " tentativas restantes!\n" << endl;
                    if (tentativas == 0) cout << "Infelizmente suas chances acabaram! Tente novamente.\n" << endl;
                }
                while (tentativas != 0);
            }
    
            if (dificuldade == 'd')
            {
                int num1, num2, num3, num4, num5,
                    primeiro_digito, segundo_digito, terceiro_digito, quarto_digito, quinto_digito;
                    
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
                
                //tirar cout dos numeros..
                cout << num1 << endl;
                cout << num2 << endl;
                cout << num3 << endl;
                cout << num4 << endl;
                cout << num5 << endl;    
                
                do {
                    int num_correto = 0,
                        num_incorreto = 0,
                        posicao_correta = 0,
                        posicao_incorreta = 0;
                    
                    do {
                        cout << "Digite cinco números de 1 a 6!" << endl;
                        
                        cout << "Insira o primeiro número: ";
                        cin >> primeiro_digito;
                        cout << "Insira o segundo número: ";
                        cin >> segundo_digito;
                        cout << "Insira o terceiro número: ";
                        cin >> terceiro_digito;
                        cout << "Insira o quarto número: ";
                        cin >> quarto_digito;
                        cout << "Insira o quinto número: ";
                        cin >> quinto_digito;
                        
                        if (primeiro_digito == segundo_digito ||
                            primeiro_digito == terceiro_digito ||
                            primeiro_digito == quarto_digito ||
                            primeiro_digito == quinto_digito ||
                            segundo_digito == terceiro_digito ||
                            segundo_digito == quarto_digito ||
                            segundo_digito == quinto_digito ||
                            terceiro_digito == quarto_digito ||
                            terceiro_digito == quinto_digito ||
                            quarto_digito == quinto_digito ||
                            (primeiro_digito < 1 || primeiro_digito > 6) ||
                            (segundo_digito < 1 || segundo_digito > 6) ||
                            (terceiro_digito < 1 || terceiro_digito > 6) ||
                            (quarto_digito < 1 || quarto_digito > 6) ||
                            (quinto_digito < 1 || quinto_digito > 6)
                        ) {
                          cout << "Não pode digitar números repetidos e abaixo de 1 ou acima de 6! Digite novamente.\n" << endl;  
                        } 
                    }
                    while (
                        primeiro_digito == segundo_digito ||
                        primeiro_digito == terceiro_digito ||
                        primeiro_digito == quarto_digito ||
                        primeiro_digito == quinto_digito ||
                        segundo_digito == terceiro_digito ||
                        segundo_digito == quarto_digito ||
                        segundo_digito == quinto_digito ||
                        terceiro_digito == quarto_digito ||
                        terceiro_digito == quinto_digito ||
                        quarto_digito == quinto_digito ||
                        (primeiro_digito < 1 || primeiro_digito > 6) ||
                        (segundo_digito < 1 || segundo_digito > 6) ||
                        (terceiro_digito < 1 || terceiro_digito > 6) ||
                        (quarto_digito < 1 || quarto_digito > 6) ||
                        (quinto_digito < 1 || quinto_digito > 6)
                    );
                    
                    if (primeiro_digito == num1 && 
                        segundo_digito == num2 && 
                        terceiro_digito == num3 &&
                        quarto_digito == num4 && 
                        quinto_digito == num5
                    ) {
                        cout << "Parabéns! Você acertou toda a sequência de números nas casas corretas. Sequência: \n" << num1 << " " << num2 << " " << num3 << " " <<  num4 << " " << num5 << endl;
                        break;
                    }
                    
                    if (primeiro_digito == num1) {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (primeiro_digito == num2 || primeiro_digito == num3 || primeiro_digito == num4 || primeiro_digito == num5)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
        
                    if (segundo_digito == num2)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (segundo_digito == num1 || segundo_digito == num3 || segundo_digito == num4 || segundo_digito == num5)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
        
                    if (terceiro_digito == num3) {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (terceiro_digito == num1 || terceiro_digito == num2 || terceiro_digito == num4 || terceiro_digito == num5)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
        
                    if (quarto_digito == num4)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (quarto_digito == num1 || quarto_digito == num2 || quarto_digito == num3 || quarto_digito == num5)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
                    
                    if (quinto_digito == num5)
                    {
                        num_correto++;
                        posicao_correta++;
                    }
                    else if (quinto_digito == num1 || quinto_digito == num2 || quinto_digito == num3 || quinto_digito == num4)
                    {
                        num_correto++;
                        posicao_incorreta++;
                    }
                    else {
                        num_incorreto++;
                    }
                    
                    cout << "Dígitos corretos: " << num_correto << endl;
                    cout << "Posições corretas: " << posicao_correta << endl;
                    cout << "Posições incorretas: " << posicao_incorreta << endl;
                    cout << "Dígitos incorretos: " << num_incorreto << endl;
                    
                    tentativas--;
                    cout << "\nVocê possui " << tentativas << " tentativas restantes!\n" << endl;
                    if (tentativas == 0) cout << "Infelizmente suas chances acabaram! Tente novamente.\n" << endl;
                }
                while (tentativas != 0);
            }
        }
    
        if (opcao == 's') {
            cout << "A nossa equipe é composta por Caio Stuart, Heloisa Born, Nycolas Darosci. O nosso trabalho foi produzido durante o mês de maio de 2024, sob a tutoria do professor Eduardo Alves." << endl;
        }
    
    } while (opcao != 'f');

    if (opcao == 'f') {
        cout << "Você saiu do mastermind.";
    }

    return 0;
}