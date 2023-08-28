#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int c1, n1, c2, n2;
    float p1, p2;

    cin >> c1;
    cin >> n1;
    cin >> p1;
    cin >> c2;
    cin >> n2;
    cin >> p2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << n1 * p1 + n2 * p2 << endl;

    return 0;
}