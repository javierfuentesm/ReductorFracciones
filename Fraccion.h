//
// Created by Javier Fuentes Mora on 17/02/20.
//

#ifndef FRACCION_FRACCION_H
#define FRACCION_FRACCION_H


class Fraccion {

private:
    int numerador{};
    int denominador{};
public:
    Fraccion();

    void inicializar(int num, int denom);
    double division();
    static int reduce(int num, int denom);

};


#endif //FRACCION_FRACCION_H
