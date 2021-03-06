#ifndef LUTIN_DECLARATIONVARIABLE_H
#define LUTIN_DECLARATIONVARIABLE_H

#include "DeclarationConstante.h"
#include "IdentificateurVariable.h"

class DeclarationVariable : public BlocDeclaration {
public:
    DeclarationVariable(IdentificateurVariable *identificateurVariable1);

    ~DeclarationVariable();

    virtual void executer(TableDesSymboles *tableDesSymboles);

    virtual void afficher();

    virtual bool analyser(TableDesSymboles *tableDesSymboles);

    virtual void optimiser();

    virtual bool estVide();

    virtual void optimiser(TableDesSymboles *);


protected:
    IdentificateurVariable *identificateurVariable;
};


#endif