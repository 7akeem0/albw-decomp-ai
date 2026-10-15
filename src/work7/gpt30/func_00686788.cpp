#include "range.h"
struct Receiver00686788;
struct Delegate00686788 {
    virtual bool invoke(void*);
    Receiver00686788* owner;
    bool(Receiver00686788::*callback)(void*);
};
bool Delegate00686788::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
