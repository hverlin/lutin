#include <iostream>
#include "EtatDefaut.h"
#include "Automate.h"
#include "Symbole.h"

class Etat5 : public EtatDefaut {
public:
    Etat5() : EtatDefaut("E5") { }

    int transition(Automate *automate, Symbole *s);
};
