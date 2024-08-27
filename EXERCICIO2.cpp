#include <iostream>
#include <limits> // Para std::numeric_limits
#include<locale>

using namespace std;

int main() {
    double receita, despesa, saldo = 0.0;
    char continuar;

    setlocale(LC_ALL,"portuguese");


    do {
        // Solicita ao usu�rio para inserir a receita
       cout << "Insira o valor da receita: ";
       cin >> receita;



        // Solicita ao usu�rio para inserir a despesa
       cout << "Insira o valor da despesa: ";
       cin >> despesa;

        // Atualiza o saldo
        saldo += (receita - despesa);

        // Exibe o saldo atualizado
        cout << "Saldo atualizado: " << saldo << endl;

        // Pergunta ao usu�rio se deseja continuar registrando
        cout << "Deseja registrar outra transa��o? (s/n): ";
        cin >> continuar;

        // Limpa o buffer de entrada para evitar problemas na pr�xima itera��o
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
