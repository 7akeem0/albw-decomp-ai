#include "range.h"
struct Receiver00685D1C;
struct Delegate00685D1C {
    virtual bool invoke(void*);
    Receiver00685D1C* owner;
    bool(Receiver00685D1C::*callback)(void*);
};
bool Delegate00685D1C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
