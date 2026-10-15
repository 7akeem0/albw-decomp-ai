#include "a6.h"
struct Cls {
    bool recoverTick();
    char pad[0x598];
    Life mLife;
};
// 0x1DE09C: named bool local keeps the (cur==0) -> eor 1 sequence unfolded
bool Cls::recoverTick() {
    bool dead = mLife.isDead();
    mLife.tick(!dead);
    return true;
}
