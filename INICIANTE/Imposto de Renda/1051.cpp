#include <bits/stdc++.h>

using namespace std;

int main(){
    double valor, imposto, x;
    cin >> valor;

    x = valor;
    if (valor <= 2000){
        cout << "Isento\n";
        return 0;
    }
    else if (valor <= 3000){
        x -= 2000;
        imposto += x * 0.08;
    }
    else if (valor <= 4500){
        x -= 3000;
        imposto += + 80;
        imposto += x * 0.18;
    }
    else {
        x -= 4500;
        imposto += + 80 + 270;

        imposto += x * 0.28;
    }

    cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    return 0;
}
