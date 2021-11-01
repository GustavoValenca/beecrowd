#include <bits/stdc++.h>

using namespace std;

int main(){
    int number, horas; 
    float valor_por_hora;
    cin >> number >> horas >> valor_por_hora;

    float salario = horas * valor_por_hora;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}
