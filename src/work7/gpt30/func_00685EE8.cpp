#include "range.h"
struct Receiver00685EE8;
struct Delegate00685EE8 {
    virtual bool invoke(void*);
    Receiver00685EE8* owner;
    bool(Receiver00685EE8::*callback)(void*);
};
bool Delegate00685EE8::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
