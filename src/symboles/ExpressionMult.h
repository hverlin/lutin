//
// Created by HAIDARA Mohamed El Mouctar on 29/02/2016.
//

#ifndef LUTIN_EXPRESSIONMULT_H
#define LUTIN_EXPRESSIONMULT_H

#include "Facteur.h"

class ExpressionMult : public Terme {

public:
    ExpressionMult(Facteur *facteur1, Terme *terme1);

    ~ExpressionMult();

    virtual void executer(TableDesSymboles *tableDesSymboles);

    virtual void afficher();

    int eval(TableDesSymboles *tablesDesSymboles);

    virtual bool analyser(TableDesSymboles *tableDesSymboles);

    virtual bool estConstante(TableDesSymboles *tableDesSymboles);

    virtual void optimiser(TableDesSymboles *tableDesSymboles);

    virtual Expression *simplifier(TableDesSymboles *tableDesSymboles);

protected:
    Facteur *facteur;

    Terme *terme;

    static const unsigned ELEMENT_NEUTRE = 1;

    static const unsigned ELEMENT_ABSORBANT = 0;
};


#endif //LUTIN_EXPRESSIONMULT_H
