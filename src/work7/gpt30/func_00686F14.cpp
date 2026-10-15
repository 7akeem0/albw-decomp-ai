#include "range.h"
struct Receiver00686F14;
struct Delegate00686F14 {
    virtual bool invoke(void*);
    Receiver00686F14* owner;
    bool(Receiver00686F14::*callback)(void*);
};
bool Delegate00686F14::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
