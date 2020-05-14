#include <bits/stdc++.h>

using namespace std;

int main()
{
    double ganhoSalario, ganhoServico, ganhoCapital, gastoMedico, gastoEducacao;
    double impostoSalario, impostoServico, impostoCapital;
    double impostoBruto, maximoDedutivel, gastosDedutiveis;
    cout << "Renda anual com salario: ";
    cin >> ganhoSalario;

    cout << "Renda anual com prestacao de servico: ";
    cin >> ganhoServico;

    cout << "Renda anual com ganho de capital: ";
    cin >> ganhoCapital;

    cout << "Gastos medicos: ";
    cin >> gastoMedico;

    cout << "Gastos educacionais: ";
    cin >> gastoEducacao;

    double salarioMensal = ganhoSalario / 12.0;


    if (salarioMensal < 3000.0) {

        impostoSalario = 0.0;
    }
    else if (salarioMensal < 5000.0) {

        impostoSalario = ganhoSalario * 0.1;
    }
    else {

        impostoSalario = ganhoSalario * 0.2;
    }

    impostoServico = ganhoServico * 0.15;

    impostoCapital = ganhoCapital * 0.2;


   impostoBruto = impostoSalario + impostoServico + impostoCapital;
   maximoDedutivel = impostoBruto * 0.3;
   gastosDedutiveis = gastoEducacao + gastoMedico;


    cout << fixed << setprecision(2);
    cout << endl << "RELATORIO DE IMPOSTO DE RENDA" << endl << endl;
    cout << "CONSOLIDADO DE RENDA:" << endl;
    cout << endl << "Imposto sobre salario: " << impostoSalario << endl;
    cout << "Imposto sobre servicos: " << impostoServico << endl;
    cout << "Imposto sobre ganho de capital: " << impostoCapital << endl;

    cout << endl << "DEDUCOES:" << endl;
    cout << "Maximo dedutivel: " << maximoDedutivel << endl;
    cout << "Gastos dedutiveis: " << gastosDedutiveis << endl;


    return 0;
}
