#include "range.h"
struct Receiver0068616C;
struct Delegate0068616C {
    virtual bool invoke(void*);
    Receiver0068616C* owner;
    bool(Receiver0068616C::*callback)(void*);
};
bool Delegate0068616C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
