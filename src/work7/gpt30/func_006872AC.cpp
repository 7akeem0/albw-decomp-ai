#include "range.h"
struct Receiver006872AC;
struct Delegate006872AC {
    virtual bool invoke(void*,void*);
    Receiver006872AC* owner;
    bool(Receiver006872AC::*callback)(void*,void*);
};
bool Delegate006872AC::invoke(void* a,void* b) {
    if(owner && callback) return (owner->*callback)(a,b);
    return false;
}
