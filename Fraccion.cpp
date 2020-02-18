//
// Created by Javier Fuentes Mora on 17/02/20.
//

#include <iostream>
#include "Fraccion.h"

using namespace std;

Fraccion::Fraccion() = default;

void Fraccion::inicializar(int num, int denom) {
    numerador = num;
    denominador = denom;
}

double Fraccion::division() {
    return numerador /(double)denominador;
}

int Fraccion::reduce(int num, int denom) {
    if (denom == 1) {
        cout << num << "/" << denom;
    } else {
        int num2 = 2;
        while (num2 <= num) {
            if (denom % num2 == 0 && num % num2 == 0) {
                denom = denom / num2;
                num = num / num2;
            } else {
                num2++;
            }
        }
        cout << num << "/" << denom;

    }
    return 0;
}
