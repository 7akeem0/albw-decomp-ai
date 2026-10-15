#include "range.h"
struct Receiver00685E30;
struct Delegate00685E30 {
    virtual bool invoke(void*);
    Receiver00685E30* owner;
    bool(Receiver00685E30::*callback)(void*);
};
bool Delegate00685E30::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
