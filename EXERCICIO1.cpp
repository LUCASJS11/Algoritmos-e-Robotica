#include <iostream>
#include <limits> // Para numeric_limits
#include <vector> // Para armazenar o n�mero de visitantes de v�rios dias
#include <locale> // Para linguagem em portugues
using namespace std;

int main() {
    vector<int> visitantesPorDia;
    char continuar;
    int somaTotalVisitantes = 0;

    //incluir lingua portuguesa
    setlocale(LC_ALL, "portuguese");


    do {
        int numeroDeVisitantes;

        cout << "\nPor favor, insira o n�mero de visitantes de hoje: ";
        cin >> numeroDeVisitantes;


        // Armazena o n�mero de visitantes para o dia
        visitantesPorDia.push_back(numeroDeVisitantes);

        // Atualiza a soma total de visitantes
        somaTotalVisitantes += numeroDeVisitantes;

        // Exibe a mensagem de confirma��o
        cout << "Os visitantes foram registrados com sucesso para o dia.\n" << endl;

        // Pergunta ao usu�rio se deseja continuar registrando para o pr�ximo dia
       cout << "Deseja registrar visitantes para outro dia? (s/n): ";
        cin >> continuar;

        // Limpa o buffer de entrada para evitar problemas na pr�xima intera��o
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (continuar == 's' || continuar == 'S');

    // Exibe o resumo dos visitantes registrados
    cout << "\nResumo dos visitantes registrados:" << endl;
    for (size_t i = 0; i < visitantesPorDia.size(); ++i) {
       cout << "Dia " << (i + 1) << ": " << visitantesPorDia[i] << " visitantes" << endl;
    }

    // Exibe a soma total dos visitantes
   cout << "Soma total de visitantes: " << somaTotalVisitantes << endl;

    return 0;
}


