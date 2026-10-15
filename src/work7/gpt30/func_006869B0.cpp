#include "range.h"
struct Receiver006869B0;
struct Delegate006869B0 {
    virtual bool invoke(void*);
    Receiver006869B0* owner;
    bool(Receiver006869B0::*callback)(void*);
};
bool Delegate006869B0::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
