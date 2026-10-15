#include "range.h"
struct Receiver00685B50;
struct Delegate00685B50 {
    virtual bool invoke(void*);
    Receiver00685B50* owner;
    bool(Receiver00685B50::*callback)(void*);
};
bool Delegate00685B50::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
