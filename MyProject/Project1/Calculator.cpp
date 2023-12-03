#include "calculator.h"
#include "operatie.h"
#include "expresie.h"
#include <iostream>
using namespace std;


void Calculator::processExpression(const string& expression) {
    Operatie operatieChecker;
    Expresie expresieSolver;

    if (operatieChecker.isValidExpression(expression)) {
        int result = expresieSolver.solveExpression(expression);
        cout << "Result: " << result << endl;
    }
    else {
        cout << "Invalid expression!" << endl;
    }
}