#include "range.h"
struct Receiver00687364;
struct Delegate00687364 {
    virtual bool invoke(void*,void*);
    Receiver00687364* owner;
    bool(Receiver00687364::*callback)(void*,void*);
};
bool Delegate00687364::invoke(void* a,void* b) {
    if(owner && callback) return (owner->*callback)(a,b);
    return false;
}
