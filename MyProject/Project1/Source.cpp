#include "Operatie.h"
#include "Calculator.h"
#include "Expresie.h"
#include <string>
using namespace std;

int main() {
    // Read user input for expressions
    string expresie;
    cout << "Introduceti expresia: ";
    getline(cin, expresie);

    // Create Expresie object and evaluate the expression
    Expresie expresieEvaluator;
    expresieEvaluator.evalueazaExpresie(expresie.c_str());

    return 0;
}