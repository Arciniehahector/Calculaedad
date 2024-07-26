#include <iostream>

int main() {
    int edad;

    // Solicitar el ingreso de la edad
    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    // Determinar si es mayor o menor de edad
    if (edad >= 18) {
        std::cout << "Eres mayor de edad." << std::endl;
    }
    else {
        std::cout << "Eres menor de edad." << std::endl;
    }

    return 0;
}
