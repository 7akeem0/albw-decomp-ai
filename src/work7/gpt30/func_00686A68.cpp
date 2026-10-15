#include "range.h"
struct Receiver00686A68;
struct Delegate00686A68 {
    virtual bool invoke(void*);
    Receiver00686A68* owner;
    bool(Receiver00686A68::*callback)(void*);
};
bool Delegate00686A68::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
