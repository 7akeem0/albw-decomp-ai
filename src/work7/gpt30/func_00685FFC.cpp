#include "range.h"
struct Receiver00685FFC;
struct Delegate00685FFC {
    virtual bool invoke(void*);
    Receiver00685FFC* owner;
    bool(Receiver00685FFC::*callback)(void*);
};
bool Delegate00685FFC::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
