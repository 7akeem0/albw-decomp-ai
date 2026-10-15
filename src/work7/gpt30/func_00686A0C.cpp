#include "range.h"
struct Receiver00686A0C;
struct Delegate00686A0C {
    virtual bool invoke(void*);
    Receiver00686A0C* owner;
    bool(Receiver00686A0C::*callback)(void*);
};
bool Delegate00686A0C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
