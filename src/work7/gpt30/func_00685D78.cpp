#include "range.h"
struct Receiver00685D78;
struct Delegate00685D78 {
    virtual bool invoke(void*);
    Receiver00685D78* owner;
    bool(Receiver00685D78::*callback)(void*);
};
bool Delegate00685D78::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
