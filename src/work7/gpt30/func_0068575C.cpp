#include "range.h"
struct Receiver0068575C;
struct Delegate0068575C {
    virtual bool invoke(void*);
    Receiver0068575C* owner;
    bool(Receiver0068575C::*callback)(void*);
};
bool Delegate0068575C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
