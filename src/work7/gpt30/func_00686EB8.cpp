#include "range.h"
struct Receiver00686EB8;
struct Delegate00686EB8 {
    virtual bool invoke(void*);
    Receiver00686EB8* owner;
    bool(Receiver00686EB8::*callback)(void*);
};
bool Delegate00686EB8::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
