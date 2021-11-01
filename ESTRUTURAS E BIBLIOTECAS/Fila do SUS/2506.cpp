#include <bits/stdc++.h>

using namespace std; 

int main(){
    int n, h, m, tempo_critico, horario_atendimento = 420;

    int criticos = 0, chegada;
    while (cin >> n){
        for (int i = 0; i < n; i++){
            cin >> h >> m >> tempo_critico;

            chegada = h * 60 + m;

            // Sem fila 
            if (chegada >= horario_atendimento) {
                
                // Definindo o horário para XX:30 ou XX:00
                horario_atendimento = chegada;
                while (horario_atendimento % 30 != 0){
                    horario_atendimento++;
                }

                if (horario_atendimento - chegada > tempo_critico) criticos++;
            }
            
            else if (tempo_critico != 0){
                if (horario_atendimento - chegada > tempo_critico) criticos++;
            }
            
            // No caso do paciente já chegar em estado crítico e não for atendido imediatamente
            else criticos++;

            // Próximo horário de atendimento
            horario_atendimento += 30;
        }

        cout << criticos << endl;

        // Para nova entrada
        horario_atendimento = 420;
        criticos = 0;
    }

    return 0;
}
