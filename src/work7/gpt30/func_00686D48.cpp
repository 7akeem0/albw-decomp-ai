#include "range.h"
struct Receiver00686D48;
struct Delegate00686D48 {
    virtual bool invoke(void*);
    Receiver00686D48* owner;
    bool(Receiver00686D48::*callback)(void*);
};
bool Delegate00686D48::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
