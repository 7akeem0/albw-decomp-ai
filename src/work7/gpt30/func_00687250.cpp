#include "range.h"
struct Receiver00687250;
struct Delegate00687250 {
    virtual bool invoke(void*,void*);
    Receiver00687250* owner;
    bool(Receiver00687250::*callback)(void*,void*);
};
bool Delegate00687250::invoke(void* a,void* b) {
    if(owner && callback) return (owner->*callback)(a,b);
    return false;
}
