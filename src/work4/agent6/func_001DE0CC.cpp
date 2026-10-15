#include "a6.h"
struct Cls {
    bool addLife(s32 delta);
    char pad[0x598];
    Life mLife;
};
bool Cls::addLife(s32 delta) {
    mLife.add(delta, true);
    return true;
}
