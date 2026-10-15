#include "range.h"
struct Receiver0068672C;
struct Delegate0068672C {
    virtual bool invoke(void*);
    Receiver0068672C* owner;
    bool(Receiver0068672C::*callback)(void*);
};
bool Delegate0068672C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
