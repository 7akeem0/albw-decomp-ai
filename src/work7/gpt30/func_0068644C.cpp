#include "range.h"
struct Receiver0068644C;
struct Delegate0068644C {
    virtual bool invoke(void*);
    Receiver0068644C* owner;
    bool(Receiver0068644C::*callback)(void*);
};
bool Delegate0068644C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
