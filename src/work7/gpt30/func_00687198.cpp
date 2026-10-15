#include "range.h"
struct Receiver00687198;
struct Delegate00687198 {
    virtual bool invoke(void*);
    Receiver00687198* owner;
    bool(Receiver00687198::*callback)(void*);
};
bool Delegate00687198::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
