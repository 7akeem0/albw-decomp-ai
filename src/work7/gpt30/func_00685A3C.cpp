#include "range.h"
struct Receiver00685A3C;
struct Delegate00685A3C {
    virtual bool invoke(void*);
    Receiver00685A3C* owner;
    bool(Receiver00685A3C::*callback)(void*);
};
bool Delegate00685A3C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
