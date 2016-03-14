#include <iostream>
#include "EtatDefaut.h"
#include "Automate.h"
#include "Symbole.h"

class Etat29 : public EtatDefaut {
public:
    Etat29() : EtatDefaut("E29") { }

    int transition(Automate *automate, Symbole *s);
};
