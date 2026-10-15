#include "range.h"
struct Receiver006862DC;
struct Delegate006862DC {
    virtual bool invoke(void*);
    Receiver006862DC* owner;
    bool(Receiver006862DC::*callback)(void*);
};
bool Delegate006862DC::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
