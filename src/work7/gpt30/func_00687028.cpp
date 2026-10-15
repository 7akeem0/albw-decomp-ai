#include "range.h"
struct Receiver00687028;
struct Delegate00687028 {
    virtual bool invoke(void*);
    Receiver00687028* owner;
    bool(Receiver00687028::*callback)(void*);
};
bool Delegate00687028::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
