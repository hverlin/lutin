#ifndef LUTIN_SYMBOLE_H
#define LUTIN_SYMBOLE_H

#include <iostream>

enum SYMBOLES
{
    BLOCS_DECLARATION,
    IDENTIFICATEUR_FACTEUR,
    BLOC_DECLARATIONS,
    DECLARATION_VARIABLE,
    DECLARATION_CONSTANTE,
    PROGRAMME,
    BLOC_INSTRUCTIONS,
    INSTRUCTION_LECTURE,
    INSTRUCTION_ECRITURE,
    INSTRUCTION_AFFECTATION,
    EXPRESSION,
    EXPRESSION_ADDITIVE,
    EXPRESSION_SOUSTRACTIVE,
    TERME,
    EXPRESSION_MULT,
    EXPRESSION_DIV,
    FACTEUR,
    EXPRESSION_PARENTHESEE,
    CONSTANTE_NUMERIQUE
};


class Symbole
{
protected:
    int identifiant;
public:
    Symbole(int id) : identifiant(id)
    { }

    virtual ~Symbole()
    { }


    std::ostream &operator<<(std::ostream& os) {
        return os << this->identifiant;
    }

    operator int() const
    { return identifiant; }
};


#endif