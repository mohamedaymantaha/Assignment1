#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    int crazyarmorhit = armor - 0.66;
    double damage = hitPoints - (rand() % crazyarmorhit + 2);
    if (damage < 0) {
        return 0;
    }
    return damage;
}