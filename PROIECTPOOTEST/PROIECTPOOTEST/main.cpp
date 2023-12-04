#include <iostream>
#include "ExpresieMatematica.h"
#include "Evaluator.h"

int main() {
    std::cout << "Introduceti o expresie matematica sau 'exit' pentru a iesi.\n";

    while (true) {
        std::string input;
        std::cout << "Expresie: ";
        std::getline(std::cin, input);

        if (input == "exit") {
            std::cout << "Calculatorul este oprit.\n";
            break;
        }

        ExpresieMatematica expresie(input);
        double rezultat = Evaluator::evaluareExpresie(expresie);

        std::cout << "Rezultat: " << rezultat << "\n\n";
    }

    return 0;
}