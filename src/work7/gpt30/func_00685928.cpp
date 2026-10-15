#include "range.h"
struct Receiver00685928;
struct Delegate00685928 {
    virtual bool invoke(void*);
    Receiver00685928* owner;
    bool(Receiver00685928::*callback)(void*);
};
bool Delegate00685928::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
