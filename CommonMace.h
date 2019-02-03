#include <string>
#include "Weapon.h"

#ifndef COMMONMACE_H
#define COMMONMACE_H

class CommonMace : public Weapon {
public:

    CommonMace() : Weapon("Common mace", 25.0) {
    }

    virtual ~CommonMace () {};

    virtual double hit(double armor);

};

#endif /* COMMONMACE_H */