#include "range.h"
struct Receiver006870E0;
struct Delegate006870E0 {
    virtual bool invoke(void*);
    Receiver006870E0* owner;
    bool(Receiver006870E0::*callback)(void*);
};
bool Delegate006870E0::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
