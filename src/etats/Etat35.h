#include <iostream>
#include "EtatDefaut.h"
#include "Automate.h"
#include "Symbole.h"

class Etat35 : public EtatDefaut {
public:
    Etat35() : EtatDefaut("E35") { }

    int transition(Automate *automate, Symbole *s);
};
