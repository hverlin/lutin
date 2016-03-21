#include "InstructionEcriture.h"
#include "ConstanteNumerique.h"

using namespace std;

InstructionEcriture::~InstructionEcriture()
{
    if (this->expression != nullptr)
    {
        delete this->expression;
    }
}

InstructionEcriture::InstructionEcriture(Expression *expression) : BlocInstruction(INSTRUCTION_ECRITURE),
                                                                   expression(expression)
{
}

void InstructionEcriture::afficher()
{
    cout << "ecrire ";
    this->expression->afficher();
    cout << " ;" << endl;
}

void InstructionEcriture::executer(TableDesSymboles *tableDesSymboles)
{
    cout << expression->eval(tableDesSymboles) << endl;
}


bool InstructionEcriture::estVide()
{
    return this->expression == nullptr;
}


void InstructionEcriture::optimiser(TableDesSymboles *tableDesSymboles)
{
    this->expression->optimiser(tableDesSymboles);
    if (this->expression->estConstante(tableDesSymboles))
    {
        int val = this->expression->eval(tableDesSymboles);
        Expression *expr = new ConstanteNumerique(
                new NumTerminal(val, this->expression->getLigne(), this->expression->getColonne()));
        delete this->expression;
        this->expression = expr;
    }
}

bool InstructionEcriture::analyser(TableDesSymboles *tableDesSymboles, Contexte contexte)
{
    contexte.validerDeclaration = true;
    contexte.validerInitilisation = true;
    return expression->analyser(tableDesSymboles, contexte);
}
