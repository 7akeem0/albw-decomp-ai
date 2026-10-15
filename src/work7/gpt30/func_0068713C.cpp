#include "range.h"
struct Receiver0068713C;
struct Delegate0068713C {
    virtual bool invoke(void*);
    Receiver0068713C* owner;
    bool(Receiver0068713C::*callback)(void*);
};
bool Delegate0068713C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
