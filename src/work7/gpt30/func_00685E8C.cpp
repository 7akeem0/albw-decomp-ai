#include "range.h"
struct Receiver00685E8C;
struct Delegate00685E8C {
    virtual bool invoke(void*);
    Receiver00685E8C* owner;
    bool(Receiver00685E8C::*callback)(void*);
};
bool Delegate00685E8C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
