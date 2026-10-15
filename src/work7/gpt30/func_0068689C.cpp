#include "range.h"
struct Receiver0068689C;
struct Delegate0068689C {
    virtual bool invoke(void*);
    Receiver0068689C* owner;
    bool(Receiver0068689C::*callback)(void*);
};
bool Delegate0068689C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
