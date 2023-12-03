#include "calculator.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Calculator calculator;

    cout << "Introduceti expresia: ";
    string userExpression;
    getline(cin, userExpression);

    calculator.processExpression(userExpression);

    return 0;
}