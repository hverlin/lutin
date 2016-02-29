#ifndef LUTIN_ETAT_H
#define LUTIN_ETAT_H

#include <string>
#include <iostream>
#include "../symboles/Symbole.h"
#include "../automate/Automate.h"

class Etat
{
public:

    Etat(std::string nom);

    virtual ~Etat();

    std::ostream &operator<<(std::ostream& os) {
        return os << this->nom;
    }

    virtual bool transition(Automate &automate, Symbole *s) = 0;

protected:
    std::string nom;
};


class Etat0:Etat
{
public:
    Etat0() : Etat("E0")
    { }

private:
    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //LUTIN_ETAT_H
