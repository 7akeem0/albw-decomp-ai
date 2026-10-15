#include "range.h"
struct Receiver00686BD8;
struct Delegate00686BD8 {
    virtual bool invoke(void*);
    Receiver00686BD8* owner;
    bool(Receiver00686BD8::*callback)(void*);
};
bool Delegate00686BD8::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
