#include "operatie.h"
using namespace std;


bool Operatie::isValidExpression(const string& expression) {
    int roundBrackets = 0;
    int squareBrackets = 0;

    for (char ch : expression) {
        if (ch == '(') {
            roundBrackets++;
        }
        else if (ch == ')') {
            roundBrackets--;
            if (roundBrackets < 0) {
                return false;
            }
        }
        else if (ch == '[') {
            squareBrackets++;
        }
        else if (ch == ']') {
            squareBrackets--;
            if (squareBrackets < 0) {
                return false;
            }
        }
    }

    return roundBrackets == 0 && squareBrackets == 0;
}