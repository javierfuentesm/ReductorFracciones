#include <iostream>
#import "Fraccion.h"

int main() {

    Fraccion fraccion;
    fraccion.inicializar(18,15);
    std::cout << fraccion.division() << std::endl;
    fraccion.reduce(18,15)  ;
return 0;
}
