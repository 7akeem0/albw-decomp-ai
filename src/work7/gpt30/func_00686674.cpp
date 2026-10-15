#include "range.h"
struct Receiver00686674;
struct Delegate00686674 {
    virtual bool invoke(void*);
    Receiver00686674* owner;
    bool(Receiver00686674::*callback)(void*);
};
bool Delegate00686674::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
