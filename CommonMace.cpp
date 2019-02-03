#include "CommonMace.h"

double CommonMace::hit(double armor) {
    double damage = hitPoints - (armor * 0.4);
    if (damage < 0) {
        return 0;
    }
    return damage;
}