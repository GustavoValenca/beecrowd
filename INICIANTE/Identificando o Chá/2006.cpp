#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin >> t;

    int answer;
    int right_answers = 0;
    for (int i = 0; i < 5; i++){
        cin >> answer;

        if (answer == t){
            right_answers++;
        }
    }
    cout << right_answers << endl;

    return 0;
}