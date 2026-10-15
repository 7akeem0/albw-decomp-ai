#include "range.h"
struct Receiver0068741C;
struct Delegate0068741C {
    virtual bool invoke(void*,void*);
    Receiver0068741C* owner;
    bool(Receiver0068741C::*callback)(void*,void*);
};
bool Delegate0068741C::invoke(void* a,void* b) {
    if(owner && callback) return (owner->*callback)(a,b);
    return false;
}
