#ifndef EXPRESIE_MATEMATICA_H
#define EXPRESIE_MATEMATICA_H

#include <string>

class ExpresieMatematica {
private:
    std::string expresie;

public:
    ExpresieMatematica(const std::string& exp);
    std::string getExpresie() const;
};

#endif // EXPRESIE_MATEMATICA_H