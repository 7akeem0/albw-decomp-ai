#include "range.h"
struct Receiver00686B7C;
struct Delegate00686B7C {
    virtual bool invoke(void*);
    Receiver00686B7C* owner;
    bool(Receiver00686B7C::*callback)(void*);
};
bool Delegate00686B7C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
