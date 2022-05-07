//
// Created by Dipir on 06/05/2022.
//

#ifndef DIVISAO_POLINOMIOS_DIVISOR_H
#define DIVISAO_POLINOMIOS_DIVISOR_H
#include <iostream>
#include <cmath>
using namespace std;

void divisor(const string& equacao) {
    string numeros;
    string operadores;
    string quebras;
    string valor_final;
    int tam = equacao.size();
    string ponto;
    const string alfabeto = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHYJKLMNOPQRSTUVWXYZ!@#$%&()_=;:'[]{},.<>?|\\";
    const string pontos = "+-*/^";
    //cout << endl << alfabeto.size() << endl << simbolo.size() << endl;
    for (int i = 0; i < tam; i++) {
        for (char j: pontos) {
            if (j == equacao[i]) {
                ponto[i] = j;
                //cout << ponto[i] << endl;
            } else {
                for (char k: alfabeto) {
                    if (k == equacao[i]) {
                        ponto[i] = k;
                        //cout << ponto[i] << endl;
                    }
                }
            }
        }

    }
    for (int i = 0; i < equacao.size(); i++) {
        for (char k: pontos) {
            if (ponto[i] == k) {
                switch (ponto[i]) {
                    case '+':
                        operadores = to_string(k+958);
                        cout << operadores << " Operador " << k << " Posicao = " << i << endl;
                        break;
                    case '-':
                        operadores = to_string(k+965);
                        cout << operadores << " Operador " << k << " Posicao = " << i << endl;
                        //cout << "conta de menos" << endl;
                        break;
                    case '/':
                        operadores = to_string(k+964);
                        cout << operadores << " Operador " << k << " Posicao = " << i << endl;
                        break;
                    case '*':
                        operadores = to_string(k+1058);
                        cout << operadores << " Operador " << k << " Posicao = " << i << endl;
                        break;
                    case '^':
                        operadores = to_string(k+1016);
                        cout << operadores << " Operador " << k << " Posicao = " << i << endl;
                        break;
                }
            }
        }
    }
    for (int i = 0; i < equacao.size(); i++) {
        for (char k: alfabeto) {
            if (ponto[i] == k)
                cout << "Numero ou simbolo = " << k << ", Posicao = " << i << endl;
        }
    }
}
#endif //DIVISAO_POLINOMIOS_DIVISOR_H
