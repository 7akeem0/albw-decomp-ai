#include "range.h"
struct Receiver00685534;
struct Delegate00685534 {
    virtual bool invoke(void*);
    Receiver00685534* owner;
    bool(Receiver00685534::*callback)(void*);
};
bool Delegate00685534::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
