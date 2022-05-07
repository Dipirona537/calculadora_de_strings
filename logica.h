//
// Created by Dipir on 06/05/2022.
//

#ifndef LOGICA_H
#define LOGICA_H
#include <iostream>
#include <cmath>
using namespace std;

void divisor(const string& equacao) {
    string numeros;
    string operadores;
    string quebras;
    string valor_final;
    int posi[equacao.size()];
    float valor_float;
    int op_posicao[equacao.size()];
    int ponto_int[equacao.size()];
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
        for (char k: alfabeto) {
            if (ponto[i] == k) {
                posi[i] = i;
                ponto_int[i] = k - '0';
                cout << "Numero ou simbolo = " << ponto_int[i] << ", Posicao = " << posi[i] << endl;
            }
        }
    }
    for (int i = 0; i < equacao.size(); i++) {
        /*for (char k : alfabeto) {
            if (ponto[i] == k) {
                ponto_int[i] = k - '0';
                cout << "Numero ou simbolo = " << ponto_int[i] << ", Posicao = " << i << endl;
            }
        }*/
        for (char k: pontos) {
            if (ponto[i] == k) {
                switch (ponto[i]) {
                    case '+':
                        operadores = to_string(k+958);
                        op_posicao[i] += i;
                        valor_float = (float)ponto_int[i-1] + (float)ponto_int[i+1];
                        cout << operadores << " Operador " << k << " Posicao = " << op_posicao[i] << endl << " Valor da op " << k << " no ponto " << i << " = " << valor_float << endl;
                        break;
                    case '-':
                        operadores = to_string(k+965);
                        op_posicao[i] = i;
                        valor_float = (float)ponto_int[i-1] - (float)ponto_int[i+1];
                        cout << operadores << " Operador " << k << " Posicao = " << op_posicao[i] << endl << " Valor da op " << k << " no ponto " << i << " = " << valor_float << endl;
                        //cout << "conta de menos" << endl;
                        break;
                    case '/':
                        operadores = to_string(k+964);
                        op_posicao[i] = i;
                        valor_float = (float)ponto_int[i-1] / (float)ponto_int[i+1];
                        cout << operadores << " Operador " << k << " Posicao = " << op_posicao[i] << endl << " Valor da op " << k << " no ponto " << i << " = " << valor_float << endl;
                        break;
                    case '*':
                        operadores = to_string(k+1058);
                        op_posicao[i] = i;
                        valor_float = (float)ponto_int[i-1] * (float)ponto_int[i+1];
                        cout << operadores << " Operador " << k << " Posicao = " << op_posicao[i] << endl << " Valor da op " << k << " no ponto " << i << " = " << valor_float << endl;
                        break;
                    case '^':
                        op_posicao[i] = i;
                        operadores = to_string(k+1016);
                        valor_float = pow((float)ponto_int[i-1], (float)ponto_int[i+1]);
                        cout << operadores << " Operador " << k << " Posicao = " << op_posicao[i] << endl << " Valor da op " << k << " no ponto " << i << " = " << valor_float << endl;
                        break;
                }
            }
        }
    }
}
#endif //LOGICA_H
